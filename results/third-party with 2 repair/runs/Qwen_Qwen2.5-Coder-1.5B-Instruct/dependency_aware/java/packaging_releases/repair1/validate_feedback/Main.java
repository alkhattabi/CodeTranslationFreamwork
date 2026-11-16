package com.example;

import org.apache.commons.lang3.StringUtils;

public class Main {
    public static int solve(int n) {
        if (n < 0) {
            return -1;
        }
        int major = n / 10000;
        int minor = (n / 100) % 100;
        int patch = n % 100;
        String suffix = patch % 4 == 0 ? "rc1" : "";
        String versionStr = major + "." + minor + "." + patch + suffix;
        try {
            Version version = new Version(versionStr);
            Version reference = new Version("2.1.0");
            if (version.compareTo(reference) < 0) {
                return 1;
            }
            if (version.equals(reference)) {
                return 2;
            }
            return 3;
        } catch (IllegalArgumentException e) {
            throw new IllegalArgumentException("Invalid version string", e);
        }
    }
}
