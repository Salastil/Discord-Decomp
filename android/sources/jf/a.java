package jf;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.IntentFilter;
import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.view.MenuItem;
import android.view.PixelCopy;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.Window;
import com.appsflyer.internal.p;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.internal.util.j;
import io.sentry.android.core.j0;
import java.io.ByteArrayOutputStream;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public abstract class a {
    public static Context a;

    /* renamed from: b, reason: collision with root package name */
    public static Boolean f12756b;

    /* JADX WARN: Removed duplicated region for block: B:37:0x00df A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00de A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Bitmap a(Activity activity, io.sentry.util.thread.a aVar, ILogger iLogger, j0 j0Var) {
        ILogger iLogger2;
        Throwable th2;
        Bitmap createBitmap;
        CountDownLatch countDownLatch;
        boolean z5 = false;
        if (activity.isFinishing() || activity.isDestroyed()) {
            iLogger.u(SentryLevel.DEBUG, "Activity isn't valid, not taking screenshot.", new Object[0]);
            return null;
        }
        Window window = activity.getWindow();
        if (window == null) {
            iLogger.u(SentryLevel.DEBUG, "Activity window is null, not taking screenshot.", new Object[0]);
            return null;
        }
        View peekDecorView = window.peekDecorView();
        if (peekDecorView == null) {
            iLogger.u(SentryLevel.DEBUG, "DecorView is null, not taking screenshot.", new Object[0]);
            return null;
        }
        View rootView = peekDecorView.getRootView();
        if (rootView == null) {
            iLogger.u(SentryLevel.DEBUG, "Root view is null, not taking screenshot.", new Object[0]);
            return null;
        }
        if (rootView.getWidth() <= 0 || rootView.getHeight() <= 0) {
            iLogger.u(SentryLevel.DEBUG, "View's width and height is zeroed, not taking screenshot.", new Object[0]);
            return null;
        }
        try {
            createBitmap = Bitmap.createBitmap(rootView.getWidth(), rootView.getHeight(), Bitmap.Config.ARGB_8888);
            countDownLatch = new CountDownLatch(1);
            j0Var.getClass();
        } catch (Throwable th3) {
            th = th3;
            iLogger2 = iLogger;
        }
        try {
            if (Build.VERSION.SDK_INT >= 26) {
                HandlerThread handlerThread = new HandlerThread("SentryScreenshot");
                handlerThread.start();
                try {
                    Handler handler = new Handler(handlerThread.getLooper());
                    AtomicBoolean atomicBoolean = new AtomicBoolean(false);
                    PixelCopy.request(window, createBitmap, new j(0, atomicBoolean, countDownLatch), handler);
                    if (countDownLatch.await(1000L, TimeUnit.MILLISECONDS)) {
                        if (atomicBoolean.get()) {
                            z5 = true;
                        }
                    }
                } finally {
                    try {
                        if (z5) {
                        }
                    } finally {
                    }
                }
                if (z5) {
                    return null;
                }
                return createBitmap;
            }
            Canvas canvas = new Canvas(createBitmap);
            if (aVar.c()) {
                rootView.draw(canvas);
                countDownLatch.countDown();
                iLogger2 = iLogger;
            } else {
                iLogger2 = iLogger;
                try {
                    activity.runOnUiThread(new p(7, rootView, canvas, iLogger2, countDownLatch));
                } catch (Throwable th4) {
                    th = th4;
                    th2 = th;
                    iLogger2.k(SentryLevel.ERROR, "Taking screenshot failed.", th2);
                    return null;
                }
            }
            if (!countDownLatch.await(1000L, TimeUnit.MILLISECONDS)) {
            }
        } catch (Throwable th5) {
            th2 = th5;
            iLogger2 = iLogger;
            iLogger2.k(SentryLevel.ERROR, "Taking screenshot failed.", th2);
            return null;
        }
    }

    public static void b(Context context, BroadcastReceiver broadcastReceiver, IntentFilter intentFilter) {
        if (Build.VERSION.SDK_INT < 34 || context.getApplicationInfo().targetSdkVersion < 34) {
            context.registerReceiver(broadcastReceiver, intentFilter);
        } else {
            context.registerReceiver(broadcastReceiver, intentFilter, 4);
        }
    }

    public static byte[] c(Bitmap bitmap, ILogger iLogger) {
        if (bitmap != null && !bitmap.isRecycled()) {
            try {
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    bitmap.compress(Bitmap.CompressFormat.PNG, 0, byteArrayOutputStream);
                    bitmap.recycle();
                    if (byteArrayOutputStream.size() <= 0) {
                        iLogger.u(SentryLevel.DEBUG, "Screenshot is 0 bytes, not attaching the image.", new Object[0]);
                        byteArrayOutputStream.close();
                        return null;
                    }
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    byteArrayOutputStream.close();
                    return byteArray;
                } finally {
                }
            } catch (Throwable th2) {
                iLogger.k(SentryLevel.ERROR, "Compressing bitmap failed.", th2);
            }
        }
        return null;
    }

    public static Icon d(Bitmap bitmap) {
        return Icon.createWithAdaptiveBitmap(bitmap);
    }

    public static void e(Configuration configuration, Configuration configuration2, Configuration configuration3) {
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        i5 = configuration.colorMode;
        int i14 = i5 & 3;
        i6 = configuration2.colorMode;
        int i15 = i6 & 3;
        if (i14 != i15) {
            i13 = configuration3.colorMode;
            configuration3.colorMode = i13 | i15;
        }
        i10 = configuration.colorMode;
        int i16 = i10 & 12;
        i11 = configuration2.colorMode;
        int i17 = i11 & 12;
        if (i16 != i17) {
            i12 = configuration3.colorMode;
            configuration3.colorMode = i12 | i17;
        }
    }

    public static ColorStateList f(MenuItem menuItem) {
        return menuItem.getIconTintList();
    }

    public static float g(ViewConfiguration viewConfiguration) {
        return viewConfiguration.getScaledHorizontalScrollFactor();
    }

    public static float h(ViewConfiguration viewConfiguration) {
        return viewConfiguration.getScaledVerticalScrollFactor();
    }

    public static synchronized boolean i(Context context) {
        Boolean bool;
        synchronized (a.class) {
            Context applicationContext = context.getApplicationContext();
            Context context2 = a;
            if (context2 != null && (bool = f12756b) != null && context2 == applicationContext) {
                return bool.booleanValue();
            }
            f12756b = null;
            if (gf.c.c()) {
                f12756b = Boolean.valueOf(applicationContext.getPackageManager().isInstantApp());
            } else {
                try {
                    context.getClassLoader().loadClass("com.google.android.instantapps.supervisor.InstantAppsRuntime");
                    f12756b = Boolean.TRUE;
                } catch (ClassNotFoundException unused) {
                    f12756b = Boolean.FALSE;
                }
            }
            a = applicationContext;
            return f12756b.booleanValue();
        }
    }

    public static void j(byte[] bArr) {
        for (int i5 = 0; i5 < bArr.length / 2; i5++) {
            byte b10 = bArr[i5];
            bArr[i5] = bArr[(bArr.length - i5) - 1];
            bArr[(bArr.length - i5) - 1] = b10;
        }
    }

    public static void k(MenuItem menuItem, char c6, int i5) {
        menuItem.setAlphabeticShortcut(c6, i5);
    }

    public static void l(MenuItem menuItem, CharSequence charSequence) {
        menuItem.setContentDescription(charSequence);
    }

    public static void m(Animator animator, long j) {
        ((AnimatorSet) animator).setCurrentPlayTime(j);
    }

    public static void n(MenuItem menuItem, ColorStateList colorStateList) {
        menuItem.setIconTintList(colorStateList);
    }

    public static void o(MenuItem menuItem, PorterDuff.Mode mode) {
        menuItem.setIconTintMode(mode);
    }

    public static void p(MenuItem menuItem, char c6, int i5) {
        menuItem.setNumericShortcut(c6, i5);
    }

    public static void q(MenuItem menuItem, CharSequence charSequence) {
        menuItem.setTooltipText(charSequence);
    }
}
