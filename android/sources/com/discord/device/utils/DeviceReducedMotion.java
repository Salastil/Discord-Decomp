package com.discord.device.utils;

import android.content.Context;
import android.provider.Settings;
import fo.n;
import ki.b;
import kotlin.Metadata;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\u0010\u000e\n\u0002\b\u0005\bÆ\u0002\u0018\u00002\u00020\u0001:\u0001\u000fB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\n\u0010\u0006\u001a\u00020\u0007*\u00020\bJ\u0015\u0010\t\u001a\u00020\n2\u0006\u0010\u0004\u001a\u00020\u000bH\u0000¢\u0006\u0002\b\fJ\f\u0010\r\u001a\u00020\u0007*\u00020\bH\u0002J\u0010\u0010\u000e\u001a\u00020\u00052\u0006\u0010\u0004\u001a\u00020\u000bH\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lcom/discord/device/utils/DeviceReducedMotion;", "", "<init>", "()V", "motionPreference", "Lcom/discord/device/utils/DeviceReducedMotion$MotionPreference;", "isReducedMotionEnabled", "", "Landroid/content/Context;", "setMotionPreference", "", "", "setMotionPreference$device_release", "isSystemReducedMotionEnabled", "createMotionPreference", "MotionPreference", "device_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class DeviceReducedMotion {

    @NotNull
    public static final DeviceReducedMotion INSTANCE = new DeviceReducedMotion();

    @NotNull
    private static MotionPreference motionPreference = MotionPreference.AUTO;

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b\u0006\b\u0082\u0081\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006¨\u0006\u0007"}, d2 = {"Lcom/discord/device/utils/DeviceReducedMotion$MotionPreference;", "", "<init>", "(Ljava/lang/String;I)V", "REDUCE", "NO_PREFERENCE", "AUTO", "device_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class MotionPreference {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ MotionPreference[] $VALUES;
        public static final MotionPreference REDUCE = new MotionPreference("REDUCE", 0);
        public static final MotionPreference NO_PREFERENCE = new MotionPreference("NO_PREFERENCE", 1);
        public static final MotionPreference AUTO = new MotionPreference("AUTO", 2);

        private static final /* synthetic */ MotionPreference[] $values() {
            return new MotionPreference[]{REDUCE, NO_PREFERENCE, AUTO};
        }

        static {
            MotionPreference[] $values = $values();
            $VALUES = $values;
            $ENTRIES = b.p($values);
        }

        private MotionPreference(String str, int i5) {
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static MotionPreference valueOf(String str) {
            return (MotionPreference) Enum.valueOf(MotionPreference.class, str);
        }

        public static MotionPreference[] values() {
            return (MotionPreference[]) $VALUES.clone();
        }
    }

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[MotionPreference.values().length];
            try {
                iArr[MotionPreference.REDUCE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[MotionPreference.NO_PREFERENCE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[MotionPreference.AUTO.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    private DeviceReducedMotion() {
    }

    private final MotionPreference createMotionPreference(String motionPreference2) {
        int hashCode = motionPreference2.hashCode();
        if (hashCode != -1484543897) {
            if (hashCode != -934873754) {
                if (hashCode == 3005871 && motionPreference2.equals("auto")) {
                    return MotionPreference.AUTO;
                }
            } else if (motionPreference2.equals("reduce")) {
                return MotionPreference.REDUCE;
            }
        } else if (motionPreference2.equals("no-preference")) {
            return MotionPreference.NO_PREFERENCE;
        }
        throw new IllegalArgumentException("Unknown motion preference: ".concat(motionPreference2));
    }

    private final boolean isSystemReducedMotionEnabled(Context context) {
        return Settings.Global.getFloat(context.getContentResolver(), "animator_duration_scale") == 0.0f;
    }

    public final boolean isReducedMotionEnabled(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "<this>");
        int i5 = WhenMappings.$EnumSwitchMapping$0[motionPreference.ordinal()];
        if (i5 == 1) {
            return true;
        }
        if (i5 == 2) {
            return false;
        }
        if (i5 == 3) {
            return isSystemReducedMotionEnabled(context);
        }
        throw new n();
    }

    public final void setMotionPreference$device_release(@NotNull String motionPreference2) {
        Intrinsics.checkNotNullParameter(motionPreference2, "motionPreference");
        motionPreference = createMotionPreference(motionPreference2);
    }
}
