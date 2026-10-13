package io.sentry.android.core.internal.util;

import io.sentry.r;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class f {

    /* renamed from: c, reason: collision with root package name */
    public static final f f11223c = new f();
    public final io.sentry.util.a a = new io.sentry.util.a();

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f11224b = new ArrayList();

    public final ArrayList a() {
        ArrayList arrayList = this.f11224b;
        r a = this.a.a();
        try {
            if (!arrayList.isEmpty()) {
                a.close();
                return arrayList;
            }
            File[] listFiles = new File("/sys/devices/system/cpu").listFiles();
            if (listFiles == null) {
                ArrayList arrayList2 = new ArrayList();
                a.close();
                return arrayList2;
            }
            for (File file : listFiles) {
                if (file.getName().matches("cpu[0-9]+")) {
                    try {
                        String H0 = m3.n.H0(new File(file, "cpufreq/cpuinfo_max_freq"));
                        if (H0 != null) {
                            arrayList.add(Integer.valueOf((int) (Long.parseLong(H0.trim()) / 1000)));
                        }
                    } catch (IOException | NumberFormatException unused) {
                    }
                }
            }
            a.close();
            return arrayList;
        } catch (Throwable th2) {
            try {
                a.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }
}
