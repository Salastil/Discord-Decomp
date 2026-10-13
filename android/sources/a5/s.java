package a5;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.os.Handler;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import android.webkit.WebView;
import android.widget.OverScroller;
import androidx.coordinatorlayout.widget.CoordinatorLayout;
import androidx.work.impl.background.systemalarm.ConstraintProxy$BatteryChargingProxy;
import androidx.work.impl.background.systemalarm.ConstraintProxy$BatteryNotLowProxy;
import androidx.work.impl.background.systemalarm.ConstraintProxy$NetworkStateProxy;
import androidx.work.impl.background.systemalarm.ConstraintProxy$StorageNotLowProxy;
import androidx.work.impl.background.systemalarm.ConstraintProxyUpdateReceiver;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.QueryProductDetailsParams;
import com.facebook.react.bridge.WritableMap;
import com.google.android.material.appbar.AppBarLayout$BaseBehavior;
import com.google.android.play.core.assetpacks.AssetPackState;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.concurrent.CancellationException;
import java.util.concurrent.CountDownLatch;
import kotlin.jvm.internal.Intrinsics;
import th.u1;
import th.v0;
import th.x0;

/* loaded from: classes.dex */
public final /* synthetic */ class s implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f219d;

    /* renamed from: e, reason: collision with root package name */
    public Object f220e;

    /* renamed from: i, reason: collision with root package name */
    public Object f221i;

    /* renamed from: v, reason: collision with root package name */
    public Object f222v;

    public /* synthetic */ s() {
        this.f219d = 8;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Object obj;
        OverScroller overScroller;
        int i5;
        jg.l c6;
        switch (this.f219d) {
            case 0:
                b bVar = (b) this.f220e;
                com.discord.billing.a aVar = (com.discord.billing.a) this.f221i;
                h hVar = (h) this.f222v;
                BillingResult billingResult = g0.f165i;
                bVar.u(24, 4, billingResult);
                aVar.a(billingResult, hVar.f173b);
                return;
            case 1:
                super/*a5.b*/.f((QueryProductDetailsParams) this.f221i, (k) this.f222v);
                return;
            case 2:
                super/*a5.b*/.a((h) this.f222v, (com.discord.billing.a) this.f221i);
                return;
            case 3:
                c5.q qVar = (c5.q) this.f221i;
                c5.m mVar = (c5.m) this.f220e;
                if (mVar.isCanceled()) {
                    mVar.finish("canceled-at-delivery");
                    return;
                }
                c5.s sVar = qVar.f3353c;
                if (sVar == null) {
                    mVar.deliverResponse(qVar.a);
                } else {
                    mVar.deliverError(sVar);
                }
                if (qVar.f3354d) {
                    mVar.addMarker("intermediate-response");
                } else {
                    mVar.finish("done");
                }
                Runnable runnable = (Runnable) this.f222v;
                if (runnable != null) {
                    runnable.run();
                    return;
                }
                return;
            case 4:
                WebView webView = (WebView) this.f220e;
                com.reactnativecommunity.webview.k kVar = ((com.reactnativecommunity.webview.j) this.f222v).f6647w;
                if (kVar == null) {
                    return;
                }
                WritableMap a = kVar.a(webView, webView.getUrl());
                a.putString("data", (String) this.f221i);
                com.reactnativecommunity.webview.j.a(webView, new ol.a(a, com.reactnativecommunity.webview.c.b(webView), 5));
                return;
            case 5:
                f3.e eVar = (f3.e) this.f222v;
                eVar.f8317v.f8321c.remove((String) this.f220e);
                o0.h hVar2 = (o0.h) this.f221i;
                if (hVar2.f15723d instanceof o0.a) {
                    return;
                }
                try {
                    hVar2.get();
                    return;
                } catch (Exception e9) {
                    eVar.f8316i.k(e9);
                    return;
                }
            case 6:
                f3.f fVar = (f3.f) this.f222v;
                Bitmap bitmap = (Bitmap) this.f220e;
                String str = (String) this.f221i;
                fVar.getClass();
                if (bitmap == null) {
                    throw new IllegalArgumentException("bitmap is null");
                }
                if (TextUtils.isEmpty(str)) {
                    throw new IllegalArgumentException("path is empty");
                }
                try {
                    FileOutputStream fileOutputStream = new FileOutputStream(new File(str));
                    try {
                        if (bitmap.compress(Bitmap.CompressFormat.PNG, 100, fileOutputStream)) {
                            fileOutputStream.close();
                            return;
                        }
                        Log.wtf("ShortcutInfoCompatSaver", "Unable to compress bitmap");
                        throw new RuntimeException("Unable to compress bitmap for saving " + str);
                    } finally {
                    }
                } catch (IOException | OutOfMemoryError | RuntimeException e10) {
                    Log.wtf("ShortcutInfoCompatSaver", "Unable to write bitmap to file", e10);
                    throw new RuntimeException(a3.e.k("Unable to write bitmap to file ", str), e10);
                }
            case 7:
                ((w3.e) this.f220e).g((w3.j) this.f221i, (e4.e) this.f222v);
                return;
            case 8:
                try {
                    obj = ((i1.d) this.f220e).call();
                } catch (Exception unused) {
                    obj = null;
                }
                ((Handler) this.f222v).post(new ii.o(12, (y) this.f221i, obj));
                return;
            case 9:
                ve.i iVar = (ve.i) this.f220e;
                j4.e eVar2 = (j4.e) iVar.f19405d;
                try {
                    ((j4.c) this.f221i).a((j4.e) this.f222v);
                    if (eVar2.g(null)) {
                        return;
                    } else {
                        throw new IllegalStateException("Cannot set the result of a completed task.");
                    }
                } catch (CancellationException unused2) {
                    if (!eVar2.f()) {
                        throw new IllegalStateException("Cannot cancel a completed task.");
                    }
                    return;
                } catch (Exception e11) {
                    iVar.q(e11);
                    return;
                }
            case 10:
                CoordinatorLayout coordinatorLayout = (CoordinatorLayout) this.f220e;
                AppBarLayout$BaseBehavior appBarLayout$BaseBehavior = (AppBarLayout$BaseBehavior) this.f222v;
                View view = (View) this.f221i;
                if (view == null || (overScroller = appBarLayout$BaseBehavior.f5912d) == null) {
                    return;
                }
                if (overScroller.computeScrollOffset()) {
                    appBarLayout$BaseBehavior.F(coordinatorLayout, view, appBarLayout$BaseBehavior.f5912d.getCurrY());
                    view.postOnAnimation(this);
                    return;
                }
                ng.g gVar = (ng.g) view;
                appBarLayout$BaseBehavior.G(coordinatorLayout, gVar);
                if (gVar.I) {
                    gVar.g(gVar.h(AppBarLayout$BaseBehavior.A(coordinatorLayout)));
                    return;
                }
                return;
            case 11:
                th.p pVar = (th.p) this.f220e;
                Bundle bundle = (Bundle) this.f221i;
                th.w wVar = (th.w) this.f222v;
                v0 v0Var = pVar.f18545g;
                v0Var.getClass();
                if (((Boolean) v0Var.b(new e4.r(22, v0Var, bundle))).booleanValue()) {
                    pVar.f18548l.post(new com.google.android.gms.internal.play_billing.v0(19, pVar, wVar));
                    ((u1) pVar.f18549m.a()).f();
                    return;
                }
                return;
            case 12:
                th.i0 i0Var = (th.i0) this.f220e;
                Bundle bundle2 = (Bundle) this.f221i;
                th.w wVar2 = (th.w) this.f222v;
                v0 v0Var2 = i0Var.a;
                v0Var2.getClass();
                if (((Boolean) v0Var2.b(new e4.r(22, v0Var2, bundle2))).booleanValue()) {
                    th.r rVar = i0Var.f18472e;
                    rVar.getClass();
                    rVar.f18558b.post(new com.google.android.gms.internal.play_billing.v0(20, rVar, wVar2));
                    ((u1) i0Var.f18474g.a()).f();
                    return;
                }
                return;
            case 13:
                x0 x0Var = (x0) this.f220e;
                ArrayList arrayList = (ArrayList) this.f221i;
                jg.g gVar2 = (jg.g) this.f222v;
                HashMap hashMap = new HashMap();
                Iterator it = arrayList.iterator();
                long j = 0;
                while (it.hasNext()) {
                    String str2 = (String) it.next();
                    try {
                        long j5 = 0;
                        for (File file : x0Var.j(str2)) {
                            j5 = file.length() + j5;
                        }
                        th.w a10 = AssetPackState.a(str2, 1, 0, 0L, j5, x0Var.f18619c.a(str2), 1, String.valueOf(x0Var.f18620d.a()), x0Var.f18621e.a(str2));
                        j += a10.f18607e;
                        hashMap.put(str2, a10);
                    } catch (wh.a e12) {
                        gVar2.a(e12);
                        return;
                    }
                }
                Iterator it2 = arrayList.iterator();
                while (it2.hasNext()) {
                    String str3 = (String) it2.next();
                    try {
                        int andIncrement = x0.f18617i.getAndIncrement();
                        x0Var.i(andIncrement, 1, str3);
                        x0Var.i(andIncrement, 2, str3);
                        x0Var.i(andIncrement, 3, str3);
                    } catch (wh.a e13) {
                        gVar2.a(e13);
                        return;
                    }
                }
                gVar2.b(new th.x(j, hashMap));
                return;
            case 14:
                xe.a aVar2 = (xe.a) this.f221i;
                Intent intent = aVar2.f20398d;
                String stringExtra = intent.getStringExtra("google.message_id");
                if (stringExtra == null) {
                    stringExtra = intent.getStringExtra("message_id");
                }
                if (TextUtils.isEmpty(stringExtra)) {
                    c6 = k0.s(null);
                } else {
                    Bundle bundle3 = new Bundle();
                    Intent intent2 = aVar2.f20398d;
                    String stringExtra2 = intent2.getStringExtra("google.message_id");
                    if (stringExtra2 == null) {
                        stringExtra2 = intent2.getStringExtra("message_id");
                    }
                    bundle3.putString("google.message_id", stringExtra2);
                    Intent intent3 = aVar2.f20398d;
                    Integer valueOf = intent3.hasExtra("google.product_id") ? Integer.valueOf(intent3.getIntExtra("google.product_id", 0)) : null;
                    if (valueOf != null) {
                        bundle3.putInt("google.product_id", valueOf.intValue());
                    }
                    Context context = (Context) this.f220e;
                    bundle3.putBoolean("supports_message_handled", true);
                    xe.k b10 = xe.k.b(context);
                    synchronized (b10) {
                        i5 = b10.a;
                        b10.a = i5 + 1;
                    }
                    c6 = b10.c(new xe.j(i5, 2, bundle3, 0));
                }
                c6.b(xe.g.f20404e, new qa.t(12, (CountDownLatch) this.f222v));
                return;
            default:
                BroadcastReceiver.PendingResult pendingResult = (BroadcastReceiver.PendingResult) this.f222v;
                Context context2 = (Context) this.f221i;
                Intent intent4 = (Intent) this.f220e;
                try {
                    boolean booleanExtra = intent4.getBooleanExtra("KEY_BATTERY_NOT_LOW_PROXY_ENABLED", false);
                    boolean booleanExtra2 = intent4.getBooleanExtra("KEY_BATTERY_CHARGING_PROXY_ENABLED", false);
                    boolean booleanExtra3 = intent4.getBooleanExtra("KEY_STORAGE_NOT_LOW_PROXY_ENABLED", false);
                    boolean booleanExtra4 = intent4.getBooleanExtra("KEY_NETWORK_STATE_PROXY_ENABLED", false);
                    v3.p.d().a(ConstraintProxyUpdateReceiver.a, "Updating proxies: (BatteryNotLowProxy (" + booleanExtra + "), BatteryChargingProxy (" + booleanExtra2 + "), StorageNotLowProxy (" + booleanExtra3 + "), NetworkStateProxy (" + booleanExtra4 + "), ");
                    f4.j.a(context2, ConstraintProxy$BatteryNotLowProxy.class, booleanExtra);
                    f4.j.a(context2, ConstraintProxy$BatteryChargingProxy.class, booleanExtra2);
                    f4.j.a(context2, ConstraintProxy$StorageNotLowProxy.class, booleanExtra3);
                    f4.j.a(context2, ConstraintProxy$NetworkStateProxy.class, booleanExtra4);
                    return;
                } finally {
                    pendingResult.finish();
                }
        }
    }

    public /* synthetic */ s(d0 d0Var, h hVar, com.discord.billing.a aVar) {
        this.f219d = 2;
        this.f220e = d0Var;
        this.f222v = hVar;
        this.f221i = aVar;
    }

    public /* synthetic */ s(Object obj, Object obj2, Object obj3, int i5) {
        this.f219d = i5;
        this.f220e = obj;
        this.f221i = obj2;
        this.f222v = obj3;
    }

    public /* synthetic */ s(Object obj, Object obj2, Object obj3, int i5, boolean z5) {
        this.f219d = i5;
        this.f222v = obj;
        this.f220e = obj2;
        this.f221i = obj3;
    }

    public s(w3.e processor, w3.j startStopToken, e4.e eVar) {
        this.f219d = 7;
        Intrinsics.checkNotNullParameter(processor, "processor");
        Intrinsics.checkNotNullParameter(startStopToken, "startStopToken");
        this.f220e = processor;
        this.f221i = startStopToken;
        this.f222v = eVar;
    }
}
