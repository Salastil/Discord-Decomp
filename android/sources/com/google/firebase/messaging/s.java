package com.google.firebase.messaging;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.SystemClock;
import android.util.Log;
import android.view.View;
import androidx.activity.ComponentDialog;
import androidx.appcompat.widget.b4;
import androidx.core.app.FrameMetricsAggregator;
import androidx.lifecycle.ProcessLifecycleOwner;
import androidx.work.WorkerParameters;
import androidx.work.impl.workers.ConstraintTrackingWorker;
import app.rive.runtime.kotlin.RiveAnimationView;
import com.discord.chat.presentation.message.view.media.ViewAttachedListener;
import com.discord.chat.presentation.message.view.media.ViewScrollStateListener;
import com.discord.theme.ThemeModule;
import com.discord.view.ScreenOverride;
import com.facebook.react.modules.devloading.DevLoadingModule;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.ui.DefaultTimeBar;
import com.reactnativecommunity.webview.RNCWebViewManager;
import com.swmansion.rnscreens.NativeProxy;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenContainer;
import com.swmansion.rnscreens.ScreenFragmentWrapper;
import com.swmansion.rnscreens.ScreenStack;
import hc.l1;
import io.sentry.c4;
import java.io.File;
import java.util.ArrayDeque;
import java.util.Iterator;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineDispatcher;
import nr.x0;
import okhttp3.Call;

/* loaded from: classes3.dex */
public final /* synthetic */ class s implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6263d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f6264e;

    public /* synthetic */ s(int i5, Object obj) {
        this.f6263d = i5;
        this.f6264e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Screen a;
        int i5 = 0;
        switch (this.f6263d) {
            case 0:
                p9.c cVar = (p9.c) this.f6264e;
                synchronized (((ArrayDeque) cVar.f16326v)) {
                    SharedPreferences.Editor edit = ((SharedPreferences) cVar.f16323d).edit();
                    String str = (String) cVar.f16324e;
                    StringBuilder sb2 = new StringBuilder();
                    Iterator it = ((ArrayDeque) cVar.f16326v).iterator();
                    while (it.hasNext()) {
                        sb2.append((String) it.next());
                        sb2.append((String) cVar.f16325i);
                    }
                    edit.putString(str, sb2.toString()).commit();
                }
                return;
            case 1:
                d0 d0Var = (d0) this.f6264e;
                Log.w("FirebaseMessaging", "Service took too long to process intent: " + d0Var.a.getAction() + " finishing.");
                d0Var.f6228b.d(null);
                return;
            case 2:
                RNCWebViewManager.lambda$scheduleLoad$31((com.reactnativecommunity.webview.j) this.f6264e);
                return;
            case 3:
                Screen screen = (Screen) this.f6264e;
                ConcurrentHashMap concurrentHashMap = NativeProxy.a;
                screen.startRemovalTransition();
                return;
            case 4:
                ScreenContainer screenContainer = (ScreenContainer) this.f6264e;
                int i6 = ScreenContainer.f6697d;
                screenContainer.performUpdates();
                return;
            case 5:
                ScreenFragmentWrapper screenFragmentWrapper = (ScreenFragmentWrapper) this.f6264e;
                ScreenStack.Companion companion = ScreenStack.Companion;
                if (screenFragmentWrapper == null || (a = screenFragmentWrapper.a()) == null) {
                    return;
                }
                a.bringToFront();
                return;
            case 6:
                ((dn.f) this.f6264e).e();
                return;
            case 7:
                dn.i iVar = (dn.i) this.f6264e;
                iVar.f7631w = false;
                iVar.measure(View.MeasureSpec.makeMeasureSpec(iVar.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(iVar.getHeight(), 1073741824));
                iVar.layout(iVar.getLeft(), iVar.getTop(), iVar.getRight(), iVar.getBottom());
                return;
            case 8:
                androidx.activity.a aVar = (androidx.activity.a) this.f6264e;
                Runnable runnable = aVar.f747e;
                if (runnable != null) {
                    Intrinsics.checkNotNull(runnable);
                    runnable.run();
                    aVar.f747e = null;
                    return;
                }
                return;
            case 9:
                ComponentDialog.a((ComponentDialog) this.f6264e);
                return;
            case 10:
                DevLoadingModule.hide$lambda$1((DevLoadingModule) this.f6264e);
                return;
            case 11:
                ThemeModule.updateTheme$lambda$1((ThemeModule) this.f6264e);
                return;
            case 12:
                ((Call) this.f6264e).cancel();
                return;
            case 13:
                fm.e eVar = ((fm.m) this.f6264e).f8785d;
                if (eVar != null) {
                    RiveAnimationView.play$default(eVar, null, null, false, 7, null);
                    return;
                }
                return;
            case 14:
                ((ScreenOverride) this.f6264e).startRemovalTransition();
                return;
            case 15:
                l1 l1Var = (l1) this.f6264e;
                try {
                    synchronized (l1Var) {
                    }
                    try {
                        l1Var.a.c(l1Var.f9777d, l1Var.f9778e);
                        return;
                    } finally {
                        l1Var.b(true);
                    }
                } catch (com.google.android.exoplayer2.c e9) {
                    ke.b.s("ExoPlayerImplInternal", "Unexpected error delivering message on external thread.", e9);
                    throw new RuntimeException(e9);
                }
            case 16:
                DefaultTimeBar defaultTimeBar = (DefaultTimeBar) this.f6264e;
                int i10 = DefaultTimeBar.f5492n0;
                defaultTimeBar.d(false);
                return;
            case 17:
                ConstraintTrackingWorker this$0 = (ConstraintTrackingWorker) this.f6264e;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                if (this$0.E.f9110d instanceof g4.a) {
                    return;
                }
                Object obj = this$0.f19207e.f2565b.a.get("androidx.work.impl.workers.ConstraintTrackingWorker.ARGUMENT_CLASS_NAME");
                String str2 = obj instanceof String ? (String) obj : null;
                v3.p d6 = v3.p.d();
                Intrinsics.checkNotNullExpressionValue(d6, "get()");
                if (str2 == null || str2.length() == 0) {
                    d6.b(i4.a.a, "No worker to delegate to.");
                    g4.j future = this$0.E;
                    Intrinsics.checkNotNullExpressionValue(future, "future");
                    future.j(new v3.k());
                    return;
                }
                v3.a0 a0Var = this$0.f19207e.f2568e;
                Context context = this$0.f19206d;
                WorkerParameters workerParameters = this$0.f2596w;
                a0Var.getClass();
                v3.o a10 = v3.a0.a(context, str2, workerParameters);
                this$0.F = a10;
                if (a10 == null) {
                    d6.a(i4.a.a, "No worker to delegate to.");
                    g4.j future2 = this$0.E;
                    Intrinsics.checkNotNullExpressionValue(future2, "future");
                    future2.j(new v3.k());
                    return;
                }
                w3.o a11 = w3.o.a(this$0.f19206d);
                Intrinsics.checkNotNullExpressionValue(a11, "getInstance(applicationContext)");
                e4.p t5 = a11.f19662c.t();
                String uuid = this$0.f19207e.a.toString();
                Intrinsics.checkNotNullExpressionValue(uuid, "id.toString()");
                e4.o n6 = t5.n(uuid);
                if (n6 == null) {
                    g4.j future3 = this$0.E;
                    Intrinsics.checkNotNullExpressionValue(future3, "future");
                    String str3 = i4.a.a;
                    future3.j(new v3.k());
                    return;
                }
                c4.l lVar = a11.j;
                Intrinsics.checkNotNullExpressionValue(lVar, "workManagerImpl.trackers");
                a4.i iVar2 = new a4.i(lVar);
                CoroutineDispatcher coroutineDispatcher = a11.f19663d.f9516b;
                Intrinsics.checkNotNullExpressionValue(coroutineDispatcher, "workManagerImpl.workTask…r.taskCoroutineDispatcher");
                this$0.E.a(new s(18, a4.l.a(iVar2, n6, coroutineDispatcher, this$0)), new f4.n(0));
                if (!iVar2.a(n6)) {
                    d6.a(i4.a.a, "Constraints not met for delegate " + str2 + ". Requesting retry.");
                    g4.j future4 = this$0.E;
                    Intrinsics.checkNotNullExpressionValue(future4, "future");
                    future4.j(new v3.l());
                    return;
                }
                d6.a(i4.a.a, "Constraints met for delegate ".concat(str2));
                try {
                    v3.o oVar = this$0.F;
                    Intrinsics.checkNotNull(oVar);
                    g4.j d7 = oVar.d();
                    Intrinsics.checkNotNullExpressionValue(d7, "delegate!!.startWork()");
                    d7.a(new com.mkuczera.haptic.a(8, this$0, d7), this$0.f19207e.f2566c);
                    return;
                } catch (Throwable th2) {
                    String str4 = i4.a.a;
                    String f2 = s4.h.f("Delegated worker ", str2, " threw exception in startWork.");
                    if (d6.a <= 3) {
                        Log.d(str4, f2, th2);
                    }
                    synchronized (this$0.f2597x) {
                        try {
                            if (!this$0.f2598y) {
                                g4.j future5 = this$0.E;
                                Intrinsics.checkNotNullExpressionValue(future5, "future");
                                future5.j(new v3.k());
                                return;
                            } else {
                                d6.a(str4, "Constraints were unmet, Retrying.");
                                g4.j future6 = this$0.E;
                                Intrinsics.checkNotNullExpressionValue(future6, "future");
                                future6.j(new v3.l());
                                return;
                            }
                        } catch (Throwable th3) {
                            throw th3;
                        }
                    }
                }
            case 18:
                x0 job = (x0) this.f6264e;
                Intrinsics.checkNotNullParameter(job, "$job");
                job.f(null);
                return;
            case 19:
                ViewAttachedListener.isAttachedRunnable$lambda$1((ViewAttachedListener) this.f6264e);
                return;
            case 20:
                ViewScrollStateListener.isScrollingStoppedRunnable$lambda$0((ViewScrollStateListener) this.f6264e);
                return;
            case 21:
                ic.u uVar = (ic.u) this.f6264e;
                AnalyticsListener$EventTime c6 = uVar.c();
                uVar.k(c6, 1028, new ic.i(c6, 2));
                uVar.f10548x.d();
                return;
            case 22:
                in.d dVar = (in.d) this.f6264e;
                dVar.f10970c = false;
                dVar.f10969b.invoke();
                return;
            case 23:
                File[] listFiles = ((File) this.f6264e).listFiles();
                if (listFiles == null) {
                    return;
                }
                int length = listFiles.length;
                while (i5 < length) {
                    File file = listFiles[i5];
                    if (file.lastModified() < c4.f11425f - TimeUnit.MINUTES.toMillis(5L)) {
                        m3.n.G(file);
                    }
                    i5++;
                }
                return;
            case 24:
                e4.i iVar3 = (e4.i) this.f6264e;
                ScheduledThreadPoolExecutor scheduledThreadPoolExecutor = (ScheduledThreadPoolExecutor) iVar3.f7952d;
                while (i5 < 40) {
                    try {
                        scheduledThreadPoolExecutor.schedule((cc.a) iVar3.f7954i, 365L, TimeUnit.DAYS).cancel(true);
                        i5++;
                    } catch (RejectedExecutionException unused) {
                        return;
                    }
                }
                scheduledThreadPoolExecutor.purge();
                return;
            case 25:
                io.sentry.android.core.a aVar2 = (io.sentry.android.core.a) this.f6264e;
                aVar2.E = SystemClock.uptimeMillis();
                aVar2.F.set(false);
                return;
            case 26:
                ((FrameMetricsAggregator) ((io.sentry.util.e) ((b4) this.f6264e).f927d).a()).b();
                return;
            case 27:
                ((io.sentry.android.core.g) this.f6264e).h(true);
                return;
            case 28:
                ((io.sentry.android.core.s) this.f6264e).a(null, true);
                return;
            default:
                io.sentry.android.core.d0 d0Var2 = (io.sentry.android.core.d0) this.f6264e;
                if (d0Var2 != null) {
                    ProcessLifecycleOwner.F.f2164x.c(d0Var2);
                    return;
                }
                return;
        }
    }

    public /* synthetic */ s(int i5, Object obj, Object obj2) {
        this.f6263d = i5;
        this.f6264e = obj2;
    }

    public /* synthetic */ s(io.sentry.android.core.a aVar, i7.a aVar2) {
        this.f6263d = 25;
        this.f6264e = aVar;
    }
}
