package gf;

import ai.k;
import android.app.Application;
import android.os.Build;
import android.os.Process;
import android.os.StrictMode;
import bf.t;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

/* loaded from: classes3.dex */
public abstract class e {
    public static String a;

    /* renamed from: b, reason: collision with root package name */
    public static int f9238b;

    /* renamed from: c, reason: collision with root package name */
    public static Boolean f9239c;

    /* JADX WARN: Code restructure failed: missing block: B:25:0x0070, code lost:
    
        if (r2 == null) goto L32;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String a() {
        BufferedReader bufferedReader;
        if (a == null) {
            if (Build.VERSION.SDK_INT >= 28) {
                a = Application.getProcessName();
            } else {
                int i5 = f9238b;
                if (i5 == 0) {
                    i5 = Process.myPid();
                    f9238b = i5;
                }
                String str = null;
                str = null;
                str = null;
                BufferedReader bufferedReader2 = null;
                if (i5 > 0) {
                    try {
                        StringBuilder sb2 = new StringBuilder(String.valueOf(i5).length() + 14);
                        sb2.append("/proc/");
                        sb2.append(i5);
                        sb2.append("/cmdline");
                        String sb3 = sb2.toString();
                        StrictMode.ThreadPolicy allowThreadDiskReads = StrictMode.allowThreadDiskReads();
                        try {
                            bufferedReader = new BufferedReader(new FileReader(sb3));
                        } finally {
                            StrictMode.setThreadPolicy(allowThreadDiskReads);
                        }
                    } catch (IOException unused) {
                        bufferedReader = null;
                    } catch (Throwable th2) {
                        th = th2;
                    }
                    try {
                        String readLine = bufferedReader.readLine();
                        t.g(readLine);
                        str = readLine.trim();
                    } catch (IOException unused2) {
                    } catch (Throwable th3) {
                        th = th3;
                        bufferedReader2 = bufferedReader;
                        if (bufferedReader2 != null) {
                            try {
                                bufferedReader2.close();
                            } catch (IOException unused3) {
                            }
                        }
                        throw th;
                    }
                    try {
                        bufferedReader.close();
                    } catch (IOException unused4) {
                    }
                }
                a = str;
            }
        }
        return a;
    }

    public static boolean b() {
        Boolean bool = f9239c;
        if (bool == null) {
            if (Build.VERSION.SDK_INT >= 28) {
                bool = Boolean.valueOf(Process.isIsolated());
            } else {
                try {
                    Object invoke = Process.class.getDeclaredMethod("isIsolated", null).invoke(null, null);
                    Object[] objArr = new Object[0];
                    if (invoke == null) {
                        throw new k(ys.d.h0("expected a non-null reference", objArr));
                    }
                    bool = (Boolean) invoke;
                } catch (ReflectiveOperationException unused) {
                    bool = Boolean.FALSE;
                }
            }
            f9239c = bool;
        }
        return bool.booleanValue();
    }
}
