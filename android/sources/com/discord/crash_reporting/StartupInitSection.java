package com.discord.crash_reporting;

import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import org.jetbrains.annotations.NotNull;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0007\b\u0086\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007¨\u0006\b"}, d2 = {"Lcom/discord/crash_reporting/StartupInitSection;", "", "<init>", "(Ljava/lang/String;I)V", "ReactInstanceManager", "ReactBridgeLoading", "NativeModuleInitialization", "NativeModuleSetup", "crash_reporting_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class StartupInitSection {
    private static final /* synthetic */ EnumEntries $ENTRIES;
    private static final /* synthetic */ StartupInitSection[] $VALUES;
    public static final StartupInitSection ReactInstanceManager = new StartupInitSection("ReactInstanceManager", 0);
    public static final StartupInitSection ReactBridgeLoading = new StartupInitSection("ReactBridgeLoading", 1);
    public static final StartupInitSection NativeModuleInitialization = new StartupInitSection("NativeModuleInitialization", 2);
    public static final StartupInitSection NativeModuleSetup = new StartupInitSection("NativeModuleSetup", 3);

    private static final /* synthetic */ StartupInitSection[] $values() {
        return new StartupInitSection[]{ReactInstanceManager, ReactBridgeLoading, NativeModuleInitialization, NativeModuleSetup};
    }

    static {
        StartupInitSection[] $values = $values();
        $VALUES = $values;
        $ENTRIES = ki.b.p($values);
    }

    private StartupInitSection(String str, int i5) {
    }

    @NotNull
    public static EnumEntries getEntries() {
        return $ENTRIES;
    }

    public static StartupInitSection valueOf(String str) {
        return (StartupInitSection) Enum.valueOf(StartupInitSection.class, str);
    }

    public static StartupInitSection[] values() {
        return (StartupInitSection[]) $VALUES.clone();
    }
}
