package y2;

import android.content.Context;
import android.content.pm.PackageManager;
import android.content.res.AssetFileDescriptor;
import android.os.Build;
import com.discord.key_commands.KeyCommandDescriptor;
import java.io.File;
import java.io.IOException;

/* loaded from: classes.dex */
public abstract class h {
    public static final o0.h a = new o0.h();

    /* renamed from: b, reason: collision with root package name */
    public static final Object f20620b = new Object();

    /* renamed from: c, reason: collision with root package name */
    public static g f20621c = null;

    public static long a(Context context) {
        PackageManager packageManager = context.getApplicationContext().getPackageManager();
        return Build.VERSION.SDK_INT >= 33 ? e.a(packageManager, context).lastUpdateTime : packageManager.getPackageInfo(context.getPackageName(), 0).lastUpdateTime;
    }

    public static g b(int i5) {
        g gVar = new g(i5);
        f20621c = gVar;
        a.j(gVar);
        return f20621c;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(21:23|(1:92)(1:27)|28|(1:91)(1:32)|33|34|35|(2:75|76)(1:37)|38|(9:45|(1:49)|(1:56)|57|(2:65|66)|61|62|63|64)|(1:72)(1:(1:74))|(1:49)|(3:51|54|56)|57|(1:59)|65|66|61|62|63|64) */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x00fb, code lost:
    
        r14 = 196608;
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x00c8, code lost:
    
        r5 = 327680;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void c(Context context, boolean z5) {
        boolean z6;
        f a10;
        f fVar;
        int i5;
        if (z5 || f20621c == null) {
            synchronized (f20620b) {
                if (!z5) {
                    if (f20621c != null) {
                        return;
                    }
                }
                int i6 = 0;
                try {
                    AssetFileDescriptor openFd = context.getAssets().openFd("dexopt/baseline.prof");
                    try {
                        z6 = openFd.getLength() > 0;
                        openFd.close();
                    } finally {
                    }
                } catch (IOException unused) {
                    z6 = false;
                }
                int i10 = Build.VERSION.SDK_INT;
                if (i10 >= 28 && i10 != 30) {
                    File file = new File(new File("/data/misc/profiles/ref/", context.getPackageName()), "primary.prof");
                    long length = file.length();
                    boolean z7 = file.exists() && length > 0;
                    File file2 = new File(new File("/data/misc/profiles/cur/0/", context.getPackageName()), "primary.prof");
                    long length2 = file2.length();
                    boolean z8 = file2.exists() && length2 > 0;
                    try {
                        long a11 = a(context);
                        File file3 = new File(context.getFilesDir(), "profileInstalled");
                        if (file3.exists()) {
                            try {
                                a10 = f.a(file3);
                            } catch (IOException unused2) {
                                b(KeyCommandDescriptor.ModifierFlags.SHIFT);
                                return;
                            }
                        } else {
                            a10 = null;
                        }
                        if (a10 != null && a10.f20618c == a11 && (i5 = a10.f20617b) != 2) {
                            i6 = i5;
                            if (z5 && z8 && i6 != 1) {
                                i6 = 2;
                            }
                            if (a10 != null && a10.f20617b == 2 && i6 == 1 && length < a10.f20619d) {
                                i6 = 3;
                            }
                            int i11 = i6;
                            fVar = new f(1, i11, a11, length2);
                            if (a10 != null || !a10.equals(fVar)) {
                                fVar.b(file3);
                            }
                            b(i11);
                            return;
                        }
                        if (z7) {
                            i6 = 1;
                        } else if (z8) {
                            i6 = 2;
                        }
                        if (z5) {
                            i6 = 2;
                        }
                        if (a10 != null) {
                            i6 = 3;
                        }
                        int i112 = i6;
                        fVar = new f(1, i112, a11, length2);
                        if (a10 != null) {
                        }
                        fVar.b(file3);
                        b(i112);
                        return;
                    } catch (PackageManager.NameNotFoundException unused3) {
                        b(KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
                        return;
                    }
                }
                b(KeyCommandDescriptor.ModifierFlags.CONTROL);
            }
        }
    }
}
