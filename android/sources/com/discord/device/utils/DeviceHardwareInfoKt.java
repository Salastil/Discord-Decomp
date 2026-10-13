package com.discord.device.utils;

import a3.e;
import android.app.ActivityManager;
import android.content.Context;
import android.os.Build;
import d9.a;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import k0.d;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlin.text.StringsKt__StringsKt;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a\b\u0010\u0000\u001a\u00020\u0001H\u0000\u001a\b\u0010\u0002\u001a\u00020\u0003H\u0000\u001a\u0010\u0010\u0004\u001a\u00020\u00012\u0006\u0010\u0005\u001a\u00020\u0006H\u0000\u001a\b\u0010\u0007\u001a\u00020\u0001H\u0000\u001a\b\u0010\b\u001a\u00020\u0001H\u0000¨\u0006\t"}, d2 = {"getSocFromProcCpuInfo", "", "getNumCpuCores", "", "ramSize", "context", "Landroid/content/Context;", "maxCpuFreq", "socName", "device_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nDeviceHardwareInfo.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DeviceHardwareInfo.kt\ncom/discord/device/utils/DeviceHardwareInfoKt\n+ 2 ReadWrite.kt\nkotlin/io/TextStreamsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,72:1\n57#2:73\n1#3:74\n1#3:75\n*S KotlinDebug\n*F\n+ 1 DeviceHardwareInfo.kt\ncom/discord/device/utils/DeviceHardwareInfoKt\n*L\n10#1:73\n10#1:74\n*E\n"})
/* loaded from: classes.dex */
public final class DeviceHardwareInfoKt {
    public static final int getNumCpuCores() {
        return Runtime.getRuntime().availableProcessors();
    }

    @NotNull
    public static final String getSocFromProcCpuInfo() {
        Object obj;
        String str;
        List split$default;
        try {
            File file = new File("/proc/cpuinfo");
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(file), Charsets.UTF_8), 8192);
            try {
                Iterator it = a.B(bufferedReader).iterator();
                while (true) {
                    if (!it.hasNext()) {
                        obj = null;
                        break;
                    }
                    obj = it.next();
                    if (x.o((String) obj, "Hardware", false)) {
                        break;
                    }
                }
                String str2 = (String) obj;
                if (str2 != null) {
                    split$default = StringsKt__StringsKt.split$default(str2, new String[]{":"}, false, 0, 6, null);
                    str = StringsKt.b0((String) split$default.get(1)).toString();
                } else {
                    str = "";
                }
                bufferedReader.close();
                return str;
            } finally {
            }
        } catch (Exception unused) {
            return "";
        }
    }

    @NotNull
    public static final String maxCpuFreq() {
        int numCpuCores = getNumCpuCores();
        long j = 0;
        for (int i5 = 0; i5 < numCpuCores; i5++) {
            try {
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(new FileInputStream(new File("/sys/devices/system/cpu/cpu" + i5 + "/cpufreq/cpuinfo_max_freq")), Charsets.UTF_8), 8192);
                try {
                    String readLine = bufferedReader.readLine();
                    Intrinsics.checkNotNullExpressionValue(readLine, "readLine(...)");
                    Long a0 = StringsKt.a0(readLine);
                    long longValue = a0 != null ? a0.longValue() : 0L;
                    if (longValue > j) {
                        j = longValue;
                    }
                    Unit unit = Unit.a;
                    bufferedReader.close();
                } finally {
                }
            } catch (Exception unused) {
            }
        }
        if (j <= 0) {
            return "";
        }
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        return e.p(new Object[]{Double.valueOf(j / 1000000.0d)}, 1, Locale.getDefault(), "%.2f", "format(...)");
    }

    @NotNull
    public static final String ramSize(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        Object systemService = context.getSystemService("activity");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.ActivityManager");
        ((ActivityManager) systemService).getMemoryInfo(new ActivityManager.MemoryInfo());
        double d6 = r0.totalMem / 1.073741824E9d;
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        return e.p(new Object[]{Double.valueOf(d6)}, 1, Locale.getDefault(), "%.2f", "format(...)");
    }

    @NotNull
    public static final String socName() {
        String SOC_MANUFACTURER;
        String str;
        String SOC_MODEL;
        if (Build.VERSION.SDK_INT < 31) {
            return getSocFromProcCpuInfo();
        }
        SOC_MANUFACTURER = Build.SOC_MANUFACTURER;
        Intrinsics.checkNotNullExpressionValue(SOC_MANUFACTURER, "SOC_MANUFACTURER");
        if (SOC_MANUFACTURER.length() == 0) {
            SOC_MODEL = Build.SOC_MODEL;
            Intrinsics.checkNotNullExpressionValue(SOC_MODEL, "SOC_MODEL");
            if (SOC_MODEL.length() == 0) {
                return getSocFromProcCpuInfo();
            }
        }
        str = Build.SOC_MODEL;
        return d.l(SOC_MANUFACTURER, "_", str);
    }
}
