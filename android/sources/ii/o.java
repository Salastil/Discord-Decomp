package ii;

import a5.a0;
import a5.y;
import af.f0;
import af.g0;
import af.q;
import af.v;
import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.PendingIntent;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import android.view.View;
import android.widget.ImageButton;
import android.widget.ProgressBar;
import androidx.work.Worker;
import bf.t;
import com.android.billingclient.api.BillingResult;
import com.budiyev.android.codescanner.CodeScanner;
import com.discord.ads.AdsModule$getGoogleAdvertisingId$1;
import com.discord.billing.BillingManager;
import com.facebook.datasource.DataSubscriber;
import com.facebook.react.bridge.Promise;
import com.facebook.react.uimanager.NativeViewHierarchyManager;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.SimpleExoPlayer;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.exoplayer2.ui.PlayerControlView;
import com.google.android.gms.common.api.GoogleApiActivity;
import com.google.android.gms.internal.play_billing.s;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.common.util.concurrent.ListenableFuture;
import java.io.File;
import java.io.FileOutputStream;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Set;
import java.util.concurrent.Callable;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Future;
import java.util.concurrent.ScheduledExecutorService;
import nd.c0;
import nr.x;
import th.c1;
import th.d1;
import th.p;
import th.s0;
import th.v0;
import w3.r;

/* loaded from: classes3.dex */
public final class o implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10837d;

    /* renamed from: e, reason: collision with root package name */
    public Object f10838e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f10839i;

    public /* synthetic */ o(int i5, Object obj, Object obj2) {
        this.f10837d = i5;
        this.f10838e = obj;
        this.f10839i = obj2;
    }

    private final void a() {
        try {
            d();
        } catch (Error e9) {
            synchronized (((oi.h) this.f10839i).f15993e) {
                ((oi.h) this.f10839i).f15994i = 1;
                throw e9;
            }
        }
    }

    private final void b() {
        int i5 = 0;
        while (true) {
            try {
                ((Runnable) this.f10838e).run();
            } catch (Throwable th2) {
                x.q(th2, kotlin.coroutines.g.f13538d);
            }
            Runnable p02 = ((sr.i) this.f10839i).p0();
            if (p02 == null) {
                return;
            }
            try {
                this.f10838e = p02;
                i5++;
                if (i5 >= 16) {
                    sr.i iVar = (sr.i) this.f10839i;
                    if (sr.h.h(iVar.f18111v, iVar)) {
                        sr.i iVar2 = (sr.i) this.f10839i;
                        sr.h.g(iVar2.f18111v, iVar2, this);
                        return;
                    }
                }
            } catch (Throwable th3) {
                sr.i iVar3 = (sr.i) this.f10839i;
                synchronized (iVar3.f18114y) {
                    sr.i.E.decrementAndGet(iVar3);
                    throw th3;
                }
            }
        }
    }

    private final void c() {
        xe.i iVar = (xe.i) this.f10838e;
        IBinder iBinder = (IBinder) this.f10839i;
        synchronized (iVar) {
            if (iBinder == null) {
                iVar.a("Null service connection");
                return;
            }
            try {
                iVar.f20411i = new io.sentry.internal.debugmeta.c(iBinder);
                iVar.f20409d = 2;
                ((ScheduledExecutorService) iVar.f20414x.f20421c).execute(new xe.h(iVar, 0));
            } catch (RemoteException e9) {
                iVar.a(e9.getMessage());
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x004c, code lost:
    
        r1 = r1 | java.lang.Thread.interrupted();
        r2 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x004e, code lost:
    
        ((java.lang.Runnable) r10.f10838e).run();
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x005a, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x007a, code lost:
    
        r10.f10838e = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x007c, code lost:
    
        throw r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x005c, code lost:
    
        r3 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x005d, code lost:
    
        oi.h.f15991x.log(java.util.logging.Level.SEVERE, "Exception while executing runnable " + ((java.lang.Runnable) r10.f10838e), (java.lang.Throwable) r3);
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x0043, code lost:
    
        if (r1 == false) goto L51;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:?, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void d() {
        boolean z5 = false;
        boolean z6 = false;
        while (true) {
            try {
                synchronized (((oi.h) this.f10839i).f15993e) {
                    if (!z5) {
                        oi.h hVar = (oi.h) this.f10839i;
                        if (hVar.f15994i != 4) {
                            hVar.f15995v++;
                            hVar.f15994i = 4;
                            z5 = true;
                        }
                    }
                    Runnable runnable = (Runnable) ((oi.h) this.f10839i).f15993e.poll();
                    this.f10838e = runnable;
                    if (runnable == null) {
                        ((oi.h) this.f10839i).f15994i = 1;
                    }
                }
                if (!z6) {
                    return;
                }
            } finally {
                if (z6) {
                    Thread.currentThread().interrupt();
                }
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v22, types: [af.f, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r4v7, types: [af.f, java.lang.Object] */
    @Override // java.lang.Runnable
    public final void run() {
        bf.f fVar;
        int i5;
        int i6 = 1;
        int i10 = 0;
        Throwable th2 = null;
        switch (this.f10837d) {
            case 0:
                AdsModule$getGoogleAdvertisingId$1 adsModule$getGoogleAdvertisingId$1 = (AdsModule$getGoogleAdvertisingId$1) this.f10839i;
                Future future = (Future) this.f10838e;
                if (future instanceof ji.a) {
                    m mVar = (m) ((ji.a) future);
                    if (mVar instanceof f) {
                        Object obj = mVar.f10834d;
                        if (obj instanceof b) {
                            th2 = ((b) obj).a;
                        }
                    } else {
                        mVar.getClass();
                    }
                    if (th2 != null) {
                        adsModule$getGoogleAdvertisingId$1.onFailure(th2);
                        return;
                    }
                }
                try {
                    adsModule$getGoogleAdvertisingId$1.onSuccess(com.facebook.imagepipeline.nativecode.c.y(future));
                    return;
                } catch (Error e9) {
                    e = e9;
                    adsModule$getGoogleAdvertisingId$1.onFailure(e);
                    return;
                } catch (RuntimeException e10) {
                    e = e10;
                    adsModule$getGoogleAdvertisingId$1.onFailure(e);
                    return;
                } catch (ExecutionException e11) {
                    adsModule$getGoogleAdvertisingId$1.onFailure(e11.getCause());
                    return;
                }
            case 1:
                a5.b bVar = (a5.b) this.f10838e;
                BillingResult billingResult = (BillingResult) this.f10839i;
                if (bVar.f130f.f198b != null) {
                    BillingManager.handlePurchases$default((BillingManager) bVar.f130f.f198b.f3772b, billingResult, null, false, 4, null);
                    return;
                } else {
                    s.h("BillingClient", "No valid listener is set in BroadcastManager");
                    return;
                }
            case 2:
                Future future2 = (Future) this.f10838e;
                if (future2.isDone() || future2.isCancelled()) {
                    return;
                }
                Runnable runnable = (Runnable) this.f10839i;
                future2.cancel(true);
                s.h("BillingClient", "Async task is taking too long, cancel it!");
                if (runnable != null) {
                    runnable.run();
                    return;
                }
                return;
            case 3:
                ye.b bVar2 = (ye.b) this.f10838e;
                af.s sVar = (af.s) this.f10839i;
                ze.c cVar = (ze.c) sVar.f594b;
                q qVar = (q) ((af.e) sVar.f598f).G.get((af.a) sVar.f595c);
                if (qVar == null) {
                    return;
                }
                if (bVar2.f20906e != 0) {
                    qVar.n(bVar2, null);
                    return;
                }
                sVar.a = true;
                if (cVar.k()) {
                    if (!sVar.a || (fVar = (bf.f) sVar.f596d) == null) {
                        return;
                    }
                    cVar.e(fVar, (Set) sVar.f597e);
                    return;
                }
                try {
                    cVar.e(null, cVar.a());
                    return;
                } catch (SecurityException e12) {
                    Log.e("GoogleApiManager", "Failed to get service from broker. ", e12);
                    cVar.b("Failed to get service from broker.");
                    qVar.n(new ye.b(10, null, null), null);
                    return;
                }
            case 4:
                if (((af.m) this.f10839i).f571e) {
                    ye.b bVar3 = ((f0) this.f10838e).f558b;
                    if (bVar3.f20906e != 0 && bVar3.f20907i != null) {
                        af.m mVar2 = (af.m) this.f10839i;
                        ?? r32 = mVar2.f570d;
                        Activity a = mVar2.a();
                        PendingIntent pendingIntent = bVar3.f20907i;
                        t.g(pendingIntent);
                        int i11 = ((f0) this.f10838e).a;
                        int i12 = GoogleApiActivity.f5650e;
                        Intent intent = new Intent(a, (Class<?>) GoogleApiActivity.class);
                        intent.putExtra("pending_intent", pendingIntent);
                        intent.putExtra("failing_client_id", i11);
                        intent.putExtra("notify_manager", false);
                        r32.startActivityForResult(intent, 1);
                        return;
                    }
                    af.m mVar3 = (af.m) this.f10839i;
                    if (mVar3.f574w.a(mVar3.a(), null, bVar3.f20906e) != null) {
                        af.m mVar4 = (af.m) this.f10839i;
                        mVar4.f574w.h(mVar4.a(), mVar4.f570d, bVar3.f20906e, (af.m) this.f10839i);
                        return;
                    }
                    if (bVar3.f20906e != 18) {
                        af.m mVar5 = (af.m) this.f10839i;
                        int i13 = ((f0) this.f10838e).a;
                        mVar5.f572i.set(null);
                        mVar5.f576y.h(bVar3, i13);
                        return;
                    }
                    af.m mVar6 = (af.m) this.f10839i;
                    ye.e eVar = mVar6.f574w;
                    Activity a10 = mVar6.a();
                    eVar.getClass();
                    ProgressBar progressBar = new ProgressBar(a10, null, R.attr.progressBarStyleLarge);
                    progressBar.setIndeterminate(true);
                    progressBar.setVisibility(0);
                    AlertDialog.Builder builder = new AlertDialog.Builder(a10);
                    builder.setView(progressBar);
                    builder.setMessage(bf.l.b(a10, 18));
                    builder.setPositiveButton("", (DialogInterface.OnClickListener) null);
                    AlertDialog create = builder.create();
                    ye.e.f(a10, create, "GooglePlayServicesUpdatingDialog", mVar6);
                    af.m mVar7 = (af.m) this.f10839i;
                    Context applicationContext = mVar7.a().getApplicationContext();
                    g0 g0Var = new g0(this, create);
                    mVar7.f574w.getClass();
                    IntentFilter intentFilter = new IntentFilter("android.intent.action.PACKAGE_ADDED");
                    intentFilter.addDataScheme("package");
                    v vVar = new v(g0Var);
                    xf.c.g(applicationContext, vVar, intentFilter);
                    vVar.a(applicationContext);
                    if (ye.i.a(applicationContext)) {
                        return;
                    }
                    g0Var.a();
                    vVar.b();
                    return;
                }
                return;
            case 5:
                bo.f fVar2 = (bo.f) this.f10839i;
                int i14 = fVar2.f3125c;
                Promise promise = fVar2.f3131i;
                int i15 = fVar2.a;
                String str = fVar2.f3130h;
                try {
                    View findViewById = i15 == -1 ? fVar2.f3132l.getWindow().getDecorView().findViewById(R.id.content) : ((NativeViewHierarchyManager) this.f10838e).resolveView(i15);
                    if (findViewById == null) {
                        byte[] bArr = bo.f.f3121n;
                        Log.e("f", "No view found with reactTag: " + i15, new AssertionError());
                        promise.reject("E_UNABLE_TO_SNAPSHOT", "No view found with reactTag: " + i15);
                        return;
                    }
                    bo.e eVar2 = new bo.e(bo.f.f3121n);
                    eVar2.g(Math.min(findViewById.getHeight() * findViewById.getWidth() * 4, 32));
                    bo.f.f3121n = eVar2.f();
                    if ("tmpfile".equals(str)) {
                        i5 = -1;
                        if (-1 == i14) {
                            bo.f.c(fVar2, findViewById);
                            return;
                        }
                    } else {
                        i5 = -1;
                    }
                    if (!"tmpfile".equals(str) || i5 == i14) {
                        if (!"base64".equals(str) && !"zip-base64".equals(str)) {
                            if ("data-uri".equals(str)) {
                                bo.f.b(fVar2, findViewById);
                                return;
                            }
                            return;
                        }
                        bo.f.a(fVar2, findViewById);
                        return;
                    }
                    File file = fVar2.f3129g;
                    FileOutputStream fileOutputStream = new FileOutputStream(file);
                    try {
                        fVar2.e(findViewById, fileOutputStream);
                        fileOutputStream.close();
                        promise.resolve(Uri.fromFile(file).toString());
                        return;
                    } catch (Throwable th3) {
                        fileOutputStream.close();
                        throw th3;
                    }
                } catch (Throwable th4) {
                    byte[] bArr2 = bo.f.f3121n;
                    Log.e("f", "Failed to capture view snapshot", th4);
                    promise.reject("E_UNABLE_TO_SNAPSHOT", "Failed to capture view snapshot");
                    return;
                }
            case 6:
                com.reactnativecommunity.webview.l.f6655b.put(Integer.valueOf(((com.reactnativecommunity.webview.j) this.f10838e).getId()), Integer.valueOf(((com.reactnativecommunity.webview.c) this.f10839i).getId()));
                return;
            case 7:
                e5.i iVar = (e5.i) this.f10838e;
                e5.i iVar2 = (e5.i) this.f10839i;
                ie.s sVar2 = iVar2.f8028i;
                if (iVar2.F == null) {
                    DefaultTrackSelector defaultTrackSelector = new DefaultTrackSelector(com.google.android.exoplayer2.trackselection.a.f5475n0, new qa.s(), null);
                    iVar2.G = defaultTrackSelector;
                    com.google.android.exoplayer2.trackselection.a c6 = defaultTrackSelector.c();
                    c6.getClass();
                    ge.g gVar = new ge.g(c6);
                    int i16 = iVar2.T;
                    if (i16 == 0) {
                        i16 = Integer.MAX_VALUE;
                    }
                    gVar.f9209d = i16;
                    defaultTrackSelector.i(new com.google.android.exoplayer2.trackselection.a(gVar));
                    ie.q qVar2 = new ie.q();
                    int i17 = iVar2.U;
                    int i18 = iVar2.V;
                    int i19 = iVar2.W;
                    int i20 = iVar2.a0;
                    hc.j.a(i19, 0, "bufferForPlaybackMs", "0");
                    hc.j.a(i20, 0, "bufferForPlaybackAfterRebufferMs", "0");
                    hc.j.a(i17, i19, "minBufferMs", "bufferForPlaybackMs");
                    hc.j.a(i17, i20, "minBufferMs", "bufferForPlaybackAfterRebufferMs");
                    hc.j.a(i18, i17, "maxBufferMs", "minBufferMs");
                    hc.j jVar = new hc.j(qVar2, i17, i18, i19, i20, true);
                    hc.n nVar = new hc.n(iVar2.getContext(), new hc.b(iVar2.getContext()));
                    DefaultTrackSelector defaultTrackSelector2 = iVar2.G;
                    ke.b.k(!nVar.f9810s);
                    defaultTrackSelector2.getClass();
                    nVar.f9798e = new app.rive.runtime.kotlin.core.a(28, defaultTrackSelector2);
                    ke.b.k(!nVar.f9810s);
                    sVar2.getClass();
                    nVar.f9800g = new hc.m(i10, sVar2);
                    ke.b.k(!nVar.f9810s);
                    nVar.f9799f = new app.rive.runtime.kotlin.core.a(27, jVar);
                    ke.b.k(!nVar.f9810s);
                    nVar.f9810s = true;
                    SimpleExoPlayer simpleExoPlayer = new SimpleExoPlayer(nVar);
                    iVar2.F = simpleExoPlayer;
                    simpleExoPlayer.u(iVar);
                    iVar2.f8048y.setPlayer(iVar2.F);
                    g5.a aVar = iVar2.f8047x0;
                    aVar.f9115b = iVar;
                    y0.b.f(aVar.a, aVar, new IntentFilter("android.media.AUDIO_BECOMING_NOISY"), null, 4);
                    Handler handler = new Handler();
                    sVar2.getClass();
                    u4.b bVar4 = sVar2.f10744b;
                    bVar4.getClass();
                    CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) bVar4.f18810e;
                    Iterator it = copyOnWriteArrayList.iterator();
                    while (it.hasNext()) {
                        ie.e eVar3 = (ie.e) it.next();
                        if (eVar3.f10664b == iVar) {
                            eVar3.f10665c = true;
                            copyOnWriteArrayList.remove(eVar3);
                        }
                    }
                    copyOnWriteArrayList.add(new ie.e(handler, iVar));
                    iVar2.q(!iVar2.M);
                    iVar2.H = true;
                    iVar2.F.e0(new PlaybackParameters(iVar2.Q, 1.0f));
                }
                if (iVar2.H && iVar2.f8021c0 != null) {
                    iVar2.f8048y.f8010v.f8002d = 0.0f;
                    ArrayList f2 = iVar2.f();
                    nd.a e13 = iVar2.e(iVar2.f8021c0, iVar2.f8023d0);
                    if (f2.size() != 0) {
                        f2.add(0, e13);
                        e13 = new c0((nd.a[]) f2.toArray(new nd.a[f2.size()]));
                    }
                    int i21 = iVar2.I;
                    boolean z5 = i21 != -1;
                    if (z5) {
                        iVar2.F.e(i21, iVar2.J);
                    }
                    SimpleExoPlayer simpleExoPlayer2 = iVar2.F;
                    simpleExoPlayer2.c0();
                    com.google.android.exoplayer2.d dVar = simpleExoPlayer2.f5286b;
                    dVar.x0();
                    dVar.x0();
                    dVar.p0(Collections.singletonList(e13), !z5);
                    dVar.a();
                    iVar2.H = false;
                    iVar2.j(iVar2.f8048y);
                    iVar2.f8022d.c("onVideoLoadStart", null);
                    iVar2.K = true;
                }
                if (iVar2.f8042v == null) {
                    iVar2.f8042v = new PlayerControlView(iVar2.getContext(), null);
                }
                iVar2.f8042v.setPlayer(iVar2.F);
                iVar2.f8042v.e();
                iVar2.f8044w = iVar2.f8042v.findViewById(com.discord.R.id.exo_play_pause_container);
                iVar2.f8048y.setOnClickListener(new e5.f(iVar2, i10));
                ((ImageButton) iVar2.f8042v.findViewById(com.discord.R.id.exo_play)).setOnClickListener(new e5.f(iVar2, i6));
                ((ImageButton) iVar2.f8042v.findViewById(com.discord.R.id.exo_pause)).setOnClickListener(new e5.f(iVar2, 2));
                e5.g gVar2 = new e5.g(iVar2);
                iVar2.f8046x = gVar2;
                iVar2.F.u(gVar2);
                iVar2.m(iVar2.f8041u0);
                boolean z6 = iVar2.f8025e0;
                SimpleExoPlayer simpleExoPlayer3 = iVar2.F;
                if (simpleExoPlayer3 != null) {
                    if (z6) {
                        simpleExoPlayer3.F(1);
                    } else {
                        simpleExoPlayer3.F(0);
                    }
                }
                iVar2.f8025e0 = z6;
                iVar2.o(iVar2.O);
                return;
            case 8:
                o0.h hVar = (o0.h) this.f10839i;
                try {
                    ((o0.h) this.f10838e).get();
                    hVar.j(null);
                    return;
                } catch (Exception e14) {
                    hVar.k(e14);
                    return;
                }
            case 9:
                f3.f fVar3 = (f3.f) this.f10839i;
                fVar3.f8320b.clear();
                s.e eVar4 = fVar3.f8321c;
                Iterator it2 = ((s.d) eVar4.values()).iterator();
                while (it2.hasNext()) {
                    ((ListenableFuture) it2.next()).cancel(false);
                }
                eVar4.clear();
                fVar3.h((o0.h) this.f10838e);
                return;
            case 10:
                try {
                    ((Runnable) this.f10839i).run();
                    synchronized (((f4.l) this.f10838e).f8347e) {
                        ((f4.l) this.f10838e).a();
                    }
                    return;
                } catch (Throwable th5) {
                    synchronized (((f4.l) this.f10838e).f8347e) {
                        ((f4.l) this.f10838e).a();
                        throw th5;
                    }
                }
            case 11:
                if (((CodeScanner) this.f10839i).f3710s) {
                    ((CodeScanner) this.f10839i).f3697d.setPreviewSize((h5.q) this.f10838e);
                    CodeScanner codeScanner = (CodeScanner) this.f10839i;
                    codeScanner.f3697d.setAutoFocusEnabled(codeScanner.f3712u);
                    CodeScanner codeScanner2 = (CodeScanner) this.f10839i;
                    codeScanner2.f3697d.setFlashEnabled(codeScanner2.f3713v);
                    ((CodeScanner) this.f10839i).h();
                    return;
                }
                return;
            case 12:
                ((y) this.f10838e).accept(this.f10839i);
                return;
            case 13:
                jg.i iVar3 = (jg.i) this.f10839i;
                jg.l lVar = iVar3.f12762v;
                Task task = (Task) this.f10838e;
                if (task.k()) {
                    lVar.r();
                    return;
                }
                try {
                    lVar.q(iVar3.f12761i.N(task));
                    return;
                } catch (jg.e e15) {
                    if (e15.getCause() instanceof Exception) {
                        lVar.p((Exception) e15.getCause());
                        return;
                    } else {
                        lVar.p(e15);
                        return;
                    }
                } catch (Exception e16) {
                    lVar.p(e16);
                    return;
                }
            case 14:
                synchronized (((jg.j) this.f10839i).f12765i) {
                    try {
                        OnCompleteListener onCompleteListener = (OnCompleteListener) ((jg.j) this.f10839i).f12766v;
                        if (onCompleteListener != null) {
                            onCompleteListener.onComplete((Task) this.f10838e);
                        }
                    } finally {
                    }
                }
                return;
            case 15:
                synchronized (((jg.j) this.f10839i).f12765i) {
                    ((jg.d) ((jg.j) this.f10839i).f12766v).onSuccess(((Task) this.f10838e).i());
                }
                return;
            case 16:
                jg.l lVar2 = (jg.l) this.f10838e;
                try {
                    lVar2.q(((Callable) this.f10839i).call());
                    return;
                } catch (Exception e17) {
                    lVar2.p(e17);
                    return;
                } catch (Throwable th6) {
                    lVar2.p(new RuntimeException(th6));
                    return;
                }
            case 17:
                a();
                return;
            case 18:
                b();
                return;
            case 19:
                p pVar = (p) this.f10838e;
                Bundle bundle = (Bundle) this.f10839i;
                v0 v0Var = pVar.f18545g;
                v0Var.getClass();
                if (((Boolean) v0Var.b(new e4.l(22, v0Var, bundle))).booleanValue()) {
                    pVar.f18546h.a();
                    return;
                }
                return;
            case 20:
                v0 v0Var2 = (v0) this.f10838e;
                int i22 = ((s0) this.f10839i).a;
                v0Var2.getClass();
                v0Var2.b(new a0(i22, 17, v0Var2));
                return;
            case 21:
                d1 d1Var = (d1) this.f10838e;
                c1 c1Var = (c1) this.f10839i;
                d1Var.a.a(c1Var.f18411c, c1Var.f18412d, (String) c1Var.f10877b);
                return;
            case 22:
                g4.j jVar2 = (g4.j) this.f10838e;
                try {
                    jVar2.j(((Worker) this.f10839i).g());
                    return;
                } catch (Throwable th7) {
                    jVar2.k(th7);
                    return;
                }
            case 23:
                if (((r) this.f10839i).M.f9110d instanceof g4.a) {
                    return;
                }
                try {
                    ((ListenableFuture) this.f10838e).get();
                    v3.p.d().a(r.O, "Starting work for " + ((r) this.f10839i).f19674i.f7968c);
                    r rVar = (r) this.f10839i;
                    rVar.M.l(rVar.f19675v.d());
                    return;
                } catch (Throwable th8) {
                    ((r) this.f10839i).M.k(th8);
                    return;
                }
            case 24:
                ((x0.d) this.f10838e).f20184d = this.f10839i;
                return;
            case 25:
                Object obj2 = this.f10839i;
                Object obj3 = this.f10838e;
                try {
                    Method method = x0.e.f20192d;
                    if (method != null) {
                        method.invoke(obj3, obj2, Boolean.FALSE, "AppCompat recreation");
                    } else {
                        x0.e.f20193e.invoke(obj3, obj2, Boolean.FALSE);
                    }
                    return;
                } catch (RuntimeException e18) {
                    if (e18.getClass() == RuntimeException.class && e18.getMessage() != null && e18.getMessage().startsWith("Unable to stop")) {
                        throw e18;
                    }
                    return;
                } catch (Throwable th9) {
                    Log.e("ActivityRecreator", "Exception while invoking performStopActivity", th9);
                    return;
                }
            case 26:
                c();
                return;
            default:
                ((DataSubscriber) this.f10838e).onProgressUpdate((y8.a) this.f10839i);
                return;
        }
    }

    public String toString() {
        switch (this.f10837d) {
            case 0:
                e4.m mVar = new e4.m(o.class.getSimpleName(), 20);
                AdsModule$getGoogleAdvertisingId$1 adsModule$getGoogleAdvertisingId$1 = (AdsModule$getGoogleAdvertisingId$1) this.f10839i;
                e4.e eVar = new e4.e(9, false);
                ((e4.e) mVar.f7965v).f7944i = eVar;
                mVar.f7965v = eVar;
                eVar.f7943e = adsModule$getGoogleAdvertisingId$1;
                return mVar.toString();
            case 17:
                Runnable runnable = (Runnable) this.f10838e;
                if (runnable != null) {
                    return "SequentialExecutorWorker{running=" + runnable + "}";
                }
                StringBuilder sb2 = new StringBuilder("SequentialExecutorWorker{state=");
                int i5 = ((oi.h) this.f10839i).f15994i;
                sb2.append(i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? "null" : "RUNNING" : "QUEUED" : "QUEUING" : "IDLE");
                sb2.append("}");
                return sb2.toString();
            default:
                return super.toString();
        }
    }

    public /* synthetic */ o(Object obj, Object obj2, int i5, boolean z5) {
        this.f10837d = i5;
        this.f10839i = obj;
        this.f10838e = obj2;
    }

    public o(oi.h hVar) {
        this.f10837d = 17;
        this.f10839i = hVar;
    }
}
