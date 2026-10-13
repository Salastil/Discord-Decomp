package e5;

import android.app.Activity;
import android.media.AudioManager;
import android.net.Uri;
import android.os.Handler;
import android.text.TextUtils;
import android.util.Log;
import android.view.SurfaceView;
import android.view.TextureView;
import android.view.View;
import android.view.accessibility.CaptioningManager;
import android.widget.FrameLayout;
import cd.q;
import cd.w;
import com.discord.R;
import com.discord.jank_stats.JankScreenContext;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.LifecycleEventListener;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.modules.dialog.AlertFragment;
import com.facebook.react.uimanager.ThemedReactContext;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.PlaybackException;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.SimpleExoPlayer;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.source.dash.DashMediaSource$Factory;
import com.google.android.exoplayer2.source.hls.HlsMediaSource$Factory;
import com.google.android.exoplayer2.source.smoothstreaming.SsMediaSource$Factory;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo;
import com.google.android.exoplayer2.ui.PlayerControlView;
import com.google.android.exoplayer2.upstream.DataSource;
import fi.c0;
import fi.e0;
import fi.r0;
import fi.w0;
import hc.j0;
import hc.l0;
import hc.m;
import hc.m0;
import hc.n0;
import hc.o0;
import hc.p0;
import hc.q0;
import hc.s0;
import hc.t0;
import id.n;
import ie.b0;
import ie.s;
import java.io.IOException;
import java.net.CookieHandler;
import java.net.CookieManager;
import java.net.CookiePolicy;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.CopyOnWriteArrayList;
import ke.d0;
import n1.k;
import nc.o;
import nc.r;
import nd.a1;
import nd.y0;
import nd.z0;
import org.webrtc.MediaStreamTrack;
import td.p;

/* loaded from: classes.dex */
public final class i extends FrameLayout implements LifecycleEventListener, com.google.android.exoplayer2.h, ie.f, g5.b, AudioManager.OnAudioFocusChangeListener, o {

    /* renamed from: z0, reason: collision with root package name */
    public static final CookieManager f8019z0;
    public DataSource.Factory E;
    public SimpleExoPlayer F;
    public DefaultTrackSelector G;
    public boolean H;
    public int I;
    public long J;
    public boolean K;
    public boolean L;
    public boolean M;
    public boolean N;
    public boolean O;
    public boolean P;
    public float Q;
    public float R;
    public int S;
    public int T;
    public int U;
    public int V;
    public int W;
    public int a0;

    /* renamed from: b0, reason: collision with root package name */
    public final Handler f8020b0;

    /* renamed from: c0, reason: collision with root package name */
    public Uri f8021c0;

    /* renamed from: d, reason: collision with root package name */
    public final j f8022d;

    /* renamed from: d0, reason: collision with root package name */
    public String f8023d0;

    /* renamed from: e, reason: collision with root package name */
    public final e f8024e;

    /* renamed from: e0, reason: collision with root package name */
    public boolean f8025e0;

    /* renamed from: f0, reason: collision with root package name */
    public String f8026f0;

    /* renamed from: g0, reason: collision with root package name */
    public Dynamic f8027g0;
    public String h0;

    /* renamed from: i, reason: collision with root package name */
    public final s f8028i;

    /* renamed from: i0, reason: collision with root package name */
    public Dynamic f8029i0;

    /* renamed from: j0, reason: collision with root package name */
    public String f8030j0;

    /* renamed from: k0, reason: collision with root package name */
    public Dynamic f8031k0;

    /* renamed from: l0, reason: collision with root package name */
    public ReadableArray f8032l0;

    /* renamed from: m0, reason: collision with root package name */
    public boolean f8033m0;

    /* renamed from: n0, reason: collision with root package name */
    public boolean f8034n0;

    /* renamed from: o0, reason: collision with root package name */
    public float f8035o0;

    /* renamed from: p0, reason: collision with root package name */
    public boolean f8036p0;

    /* renamed from: q0, reason: collision with root package name */
    public Map f8037q0;

    /* renamed from: r0, reason: collision with root package name */
    public String f8038r0;

    /* renamed from: s0, reason: collision with root package name */
    public boolean f8039s0;

    /* renamed from: t0, reason: collision with root package name */
    public UUID f8040t0;

    /* renamed from: u0, reason: collision with root package name */
    public boolean f8041u0;

    /* renamed from: v, reason: collision with root package name */
    public PlayerControlView f8042v;

    /* renamed from: v0, reason: collision with root package name */
    public final ThemedReactContext f8043v0;

    /* renamed from: w, reason: collision with root package name */
    public View f8044w;

    /* renamed from: w0, reason: collision with root package name */
    public final AudioManager f8045w0;

    /* renamed from: x, reason: collision with root package name */
    public g f8046x;

    /* renamed from: x0, reason: collision with root package name */
    public final g5.a f8047x0;

    /* renamed from: y, reason: collision with root package name */
    public final d f8048y;

    /* renamed from: y0, reason: collision with root package name */
    public final cd.d f8049y0;

    static {
        CookieManager cookieManager = new CookieManager();
        f8019z0 = cookieManager;
        cookieManager.setCookiePolicy(CookiePolicy.ACCEPT_ORIGINAL_SERVER);
    }

    public i(ThemedReactContext themedReactContext, e eVar) {
        super(themedReactContext);
        this.O = false;
        this.P = false;
        this.Q = 1.0f;
        this.R = 1.0f;
        this.S = 3;
        this.T = 0;
        this.U = 50000;
        this.V = 50000;
        this.W = 2500;
        this.a0 = 5000;
        this.f8034n0 = true;
        this.f8035o0 = 250.0f;
        this.f8036p0 = false;
        this.f8039s0 = false;
        this.f8040t0 = null;
        this.f8049y0 = new cd.d(this);
        this.f8043v0 = themedReactContext;
        this.f8022d = new j(themedReactContext);
        this.f8024e = eVar;
        this.f8028i = (s) ((u4.b) eVar).f18810e;
        this.I = -1;
        this.J = -9223372036854775807L;
        this.E = b(true);
        CookieHandler cookieHandler = CookieHandler.getDefault();
        CookieManager cookieManager = f8019z0;
        if (cookieHandler != cookieManager) {
            CookieHandler.setDefault(cookieManager);
        }
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
        d dVar = new d(getContext());
        this.f8048y = dVar;
        dVar.setLayoutParams(layoutParams);
        addView(this.f8048y, 0, layoutParams);
        this.f8020b0 = new Handler();
        this.f8045w0 = (AudioManager) themedReactContext.getSystemService(MediaStreamTrack.AUDIO_TRACK_KIND);
        themedReactContext.addLifecycleEventListener(this);
        this.f8047x0 = new g5.a(themedReactContext);
    }

    public static int g(a1 a1Var) {
        if (a1Var.f15065d == 0) {
            return -1;
        }
        String language = Locale.getDefault().getLanguage();
        String iSO3Language = Locale.getDefault().getISO3Language();
        for (int i5 = 0; i5 < a1Var.f15065d; i5++) {
            String str = a1Var.a(i5).f15211v[0].f5229i;
            if (str != null && (str.equals(language) || str.equals(iSO3Language))) {
                return i5;
            }
        }
        return 0;
    }

    @Override // nc.o
    public final void C(int i5, nd.s sVar) {
        Log.d("DRM Info", "onDrmKeysLoaded");
    }

    @Override // ie.f
    public final void a(int i5, long j, long j5) {
        if (this.f8039s0) {
            SimpleExoPlayer simpleExoPlayer = this.F;
            if (simpleExoPlayer == null) {
                this.f8022d.a(j5, 0, 0, "-1");
                return;
            }
            simpleExoPlayer.c0();
            com.google.android.exoplayer2.d dVar = simpleExoPlayer.f5286b;
            dVar.x0();
            Format format = dVar.N;
            this.f8022d.a(j5, format != null ? format.O : 0, format != null ? format.N : 0, format != null ? format.f5225d : "-1");
        }
    }

    public final DataSource.Factory b(boolean z5) {
        return b.a(this.f8043v0, z5 ? this.f8028i : null, this.f8037q0, this.f8038r0);
    }

    @Override // g5.b
    public final void c() {
        this.f8022d.c("onVideoAudioBecomingNoisy", null);
    }

    @Override // nc.o
    public final void d(int i5, nd.s sVar, Exception exc) {
        Log.d("DRM Info", "onDrmSessionManagerError");
        this.f8022d.b("onDrmSessionManagerError", exc);
    }

    public final nd.a e(Uri uri, String str) {
        p0 p0Var;
        r rVar;
        e eVar = this.f8024e;
        j0 j0Var = new j0();
        m0 m0Var = new m0();
        m0Var.f9786c = w0.f8728y;
        c0 c0Var = e0.f8656e;
        r0 r0Var = r0.f8704w;
        m0Var.f9790g = r0Var;
        List list = Collections.EMPTY_LIST;
        q0 q0Var = q0.f9843i;
        ke.b.k(m0Var.f9785b == null || m0Var.a != null);
        if (uri != null) {
            p0Var = new p0(uri, null, m0Var.a != null ? new n0(m0Var) : null, null, list, null, r0Var);
        } else {
            p0Var = null;
        }
        MediaItem mediaItem = new MediaItem("", new l0(j0Var), p0Var, new o0(-9223372036854775807L, -9223372036854775807L, -9223372036854775807L, -3.4028235E38f, -3.4028235E38f), MediaMetadata.f5241f0, q0Var);
        p0 p0Var2 = p0Var;
        String k = !TextUtils.isEmpty(str) ? a3.e.k(".", str) : uri.getLastPathSegment();
        int i5 = d0.a;
        int D = d0.D(Uri.parse("file:///" + k));
        int i6 = 16;
        if (D == 0) {
            qd.j jVar = new qd.j(this.E);
            DataSource.Factory b10 = b(false);
            DashMediaSource$Factory dashMediaSource$Factory = new DashMediaSource$Factory(jVar, b10);
            int i10 = this.S;
            ((u4.b) eVar).getClass();
            dashMediaSource$Factory.f5439d = new p9.d(i10, 4);
            p0Var2.getClass();
            ie.m0 eVar2 = new rd.e();
            List list2 = p0Var2.f9837w;
            return new qd.h(mediaItem, b10, !list2.isEmpty() ? new e4.e(i6, eVar2, list2) : eVar2, jVar, dashMediaSource$Factory.f5438c, dashMediaSource$Factory.f5437b.b(mediaItem), dashMediaSource$Factory.f5439d, dashMediaSource$Factory.f5440e, dashMediaSource$Factory.f5441f);
        }
        if (D == 1) {
            ud.a aVar = new ud.a(this.E);
            DataSource.Factory b11 = b(false);
            SsMediaSource$Factory ssMediaSource$Factory = new SsMediaSource$Factory(aVar, b11);
            int i11 = this.S;
            ((u4.b) eVar).getClass();
            ssMediaSource$Factory.f5452d = new p9.d(i11, 4);
            p0Var2.getClass();
            ie.m0 bVar = new rj.b(4);
            List list3 = p0Var2.f9837w;
            return new ud.e(mediaItem, b11, !list3.isEmpty() ? new e4.e(i6, bVar, list3) : bVar, aVar, ssMediaSource$Factory.f5450b, ssMediaSource$Factory.f5451c.b(mediaItem), ssMediaSource$Factory.f5452d, ssMediaSource$Factory.f5453e);
        }
        if (D == 2) {
            HlsMediaSource$Factory hlsMediaSource$Factory = new HlsMediaSource$Factory(this.E);
            int i12 = this.S;
            ((u4.b) eVar).getClass();
            hlsMediaSource$Factory.f5447g = new p9.d(i12, 4);
            p0Var2.getClass();
            p pVar = hlsMediaSource$Factory.f5443c;
            List list4 = p0Var2.f9837w;
            if (!list4.isEmpty()) {
                pVar = new e4.r(21, pVar, list4);
            }
            sd.c cVar = hlsMediaSource$Factory.a;
            sd.d dVar = hlsMediaSource$Factory.f5442b;
            j8.b bVar2 = hlsMediaSource$Factory.f5445e;
            r b12 = hlsMediaSource$Factory.f5446f.b(mediaItem);
            p9.d dVar2 = hlsMediaSource$Factory.f5447g;
            k kVar = hlsMediaSource$Factory.f5444d;
            sd.c cVar2 = hlsMediaSource$Factory.a;
            kVar.getClass();
            return new sd.o(mediaItem, cVar, dVar, bVar2, b12, dVar2, new td.c(cVar2, dVar2, pVar), hlsMediaSource$Factory.j, hlsMediaSource$Factory.f5448h, hlsMediaSource$Factory.f5449i);
        }
        if (D != 4) {
            throw new IllegalStateException(k0.d.i(D, "Unsupported type: "));
        }
        DataSource.Factory factory = this.E;
        m mVar = new m(29, new qc.h());
        Object obj = new Object();
        int i13 = this.S;
        ((u4.b) eVar).getClass();
        p9.d dVar3 = new p9.d(i13, 4);
        p0Var2.getClass();
        mediaItem.f5235e.getClass();
        n0 n0Var = mediaItem.f5235e.f9835i;
        if (n0Var == null || d0.a < 18) {
            rVar = r.a;
        } else {
            synchronized (obj) {
                try {
                    rVar = n0Var.equals(null) ? null : nc.g.a(n0Var);
                    rVar.getClass();
                } finally {
                }
            }
        }
        return new nd.j0(mediaItem, factory, mVar, rVar, dVar3);
    }

    public final ArrayList f() {
        ArrayList arrayList = new ArrayList();
        if (this.f8032l0 != null) {
            for (int i5 = 0; i5 < this.f8032l0.size(); i5++) {
                ReadableMap map = this.f8032l0.getMap(i5);
                String string = map.getString("language");
                String string2 = map.hasKey(AlertFragment.ARG_TITLE) ? map.getString(AlertFragment.ARG_TITLE) : string + " " + i5;
                Uri parse = Uri.parse(map.getString("uri"));
                String string3 = map.getString("type");
                s0 s0Var = new s0(parse);
                s0Var.a = string3;
                s0Var.f9866e = string;
                s0Var.f9863b = -1;
                s0Var.f9864c = -1;
                s0Var.f9867f = string2;
                t0 t0Var = new t0(s0Var);
                DataSource.Factory factory = this.E;
                factory.getClass();
                arrayList.add(new y0(t0Var, factory, new p9.d(-1, 4)));
            }
        }
        return arrayList;
    }

    public final int h(int i5) {
        SimpleExoPlayer simpleExoPlayer = this.F;
        if (simpleExoPlayer == null) {
            return -1;
        }
        simpleExoPlayer.c0();
        com.google.android.exoplayer2.d dVar = simpleExoPlayer.f5286b;
        dVar.x0();
        int length = dVar.f5358g.length;
        for (int i6 = 0; i6 < length; i6++) {
            SimpleExoPlayer simpleExoPlayer2 = this.F;
            simpleExoPlayer2.c0();
            com.google.android.exoplayer2.d dVar2 = simpleExoPlayer2.f5286b;
            dVar2.x0();
            if (dVar2.f5358g[i6].f9659e == i5) {
                return i6;
            }
        }
        return -1;
    }

    public final void i() {
        new Handler().postDelayed(new ii.o(this, this, 7, false), 1L);
    }

    public final void j(View view) {
        if (view == null) {
            return;
        }
        view.measure(View.MeasureSpec.makeMeasureSpec(getMeasuredWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(getMeasuredHeight(), 1073741824));
        view.layout(view.getLeft(), view.getTop(), view.getMeasuredWidth(), view.getMeasuredHeight());
    }

    public final void k() {
        if (this.F != null) {
            u();
            try {
                this.F.g0();
                this.F.d0();
            } catch (Exception unused) {
            }
            this.F.m(this);
            this.G = null;
            d dVar = this.f8048y;
            if (dVar != null) {
                dVar.setPlayer(null);
            }
            this.F = null;
        }
        this.f8049y0.removeMessages(1);
        this.f8043v0.removeLifecycleEventListener(this);
        l8.a aVar = g5.b.f9116f;
        g5.a aVar2 = this.f8047x0;
        aVar2.f9115b = aVar;
        try {
            aVar2.a.unregisterReceiver(aVar2);
        } catch (Exception unused2) {
        }
        CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) this.f8028i.f10744b.f18810e;
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            ie.e eVar = (ie.e) it.next();
            if (eVar.f10664b == this) {
                eVar.f10665c = true;
                copyOnWriteArrayList.remove(eVar);
            }
        }
    }

    public final boolean l() {
        return this.f8033m0 || this.O || this.f8021c0 == null || this.P || this.f8045w0.requestAudioFocus(this, 3, 1) == 1;
    }

    public final void m(boolean z5) {
        this.f8041u0 = z5;
        SimpleExoPlayer simpleExoPlayer = this.F;
        if (simpleExoPlayer == null || this.f8048y == null) {
            return;
        }
        if (!z5) {
            int indexOfChild = indexOfChild(this.f8042v);
            if (indexOfChild != -1) {
                removeViewAt(indexOfChild);
                return;
            }
            return;
        }
        if (simpleExoPlayer == null) {
            return;
        }
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
        this.f8042v.setLayoutParams(layoutParams);
        int indexOfChild2 = indexOfChild(this.f8042v);
        if (indexOfChild2 != -1) {
            removeViewAt(indexOfChild2);
        }
        addView(this.f8042v, 1, layoutParams);
    }

    public final void n(boolean z5) {
        if (z5 == this.L) {
            return;
        }
        this.L = z5;
        Activity currentActivity = this.f8043v0.getCurrentActivity();
        if (currentActivity == null) {
            return;
        }
        View decorView = currentActivity.getWindow().getDecorView();
        boolean z6 = this.L;
        j jVar = this.f8022d;
        if (!z6) {
            jVar.c("onVideoFullscreenPlayerWillDismiss", null);
            decorView.setSystemUiVisibility(0);
            jVar.c("onVideoFullscreenPlayerDidDismiss", null);
        } else {
            int i5 = d0.a >= 19 ? 4102 : 6;
            jVar.c("onVideoFullscreenPlayerWillPresent", null);
            decorView.setSystemUiVisibility(i5);
            jVar.c("onVideoFullscreenPlayerDidPresent", null);
        }
    }

    public final void o(boolean z5) {
        boolean z6 = this.O;
        this.O = z5;
        float f2 = z5 ? 0.0f : 1.0f;
        this.R = f2;
        SimpleExoPlayer simpleExoPlayer = this.F;
        if (simpleExoPlayer == null) {
            return;
        }
        simpleExoPlayer.f0(f2);
        if (z6 == z5 || !this.F.g() || this.f8033m0) {
            return;
        }
        if (z5 && this.P) {
            this.f8045w0.abandonAudioFocus(this);
            this.P = false;
        } else {
            if (z5 || this.P) {
                return;
            }
            this.P = l();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        i();
    }

    @Override // android.media.AudioManager.OnAudioFocusChangeListener
    public final void onAudioFocusChange(int i5) {
        j jVar = this.f8022d;
        if (i5 == -2) {
            jVar.getClass();
            WritableMap createMap = Arguments.createMap();
            createMap.putBoolean("hasAudioFocus", false);
            jVar.c("onAudioFocusChanged", createMap);
        } else if (i5 == -1) {
            this.P = false;
            jVar.getClass();
            WritableMap createMap2 = Arguments.createMap();
            createMap2.putBoolean("hasAudioFocus", false);
            jVar.c("onAudioFocusChanged", createMap2);
            this.f8020b0.post(new h(this, 0));
            this.f8045w0.abandonAudioFocus(this);
        } else if (i5 == 1) {
            this.P = true;
            jVar.getClass();
            WritableMap createMap3 = Arguments.createMap();
            createMap3.putBoolean("hasAudioFocus", true);
            jVar.c("onAudioFocusChanged", createMap3);
        }
        if (this.F != null) {
            if (i5 == -3) {
                if (this.O) {
                    return;
                }
                this.f8020b0.post(new h(this, 1));
                return;
            }
            if (i5 != 1 || this.O) {
                return;
            }
            this.f8020b0.post(new h(this, 2));
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostDestroy() {
        if (this.L) {
            n(false);
        }
        this.f8045w0.abandonAudioFocus(this);
        k();
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostPause() {
        SimpleExoPlayer simpleExoPlayer;
        if (this.f8036p0) {
            return;
        }
        q(false);
        if (this.F != null) {
            try {
                u();
                this.F.g0();
                this.H = true;
            } catch (Exception unused) {
            }
        }
        d dVar = this.f8048y;
        if (dVar == null || (simpleExoPlayer = dVar.f8012x) == null) {
            return;
        }
        View view = dVar.f8007d;
        if (view instanceof TextureView) {
            simpleExoPlayer.k((TextureView) view);
        } else if (view instanceof SurfaceView) {
            simpleExoPlayer.G((SurfaceView) view);
        }
    }

    @Override // com.facebook.react.bridge.LifecycleEventListener
    public final void onHostResume() {
        d dVar;
        if (this.f8036p0 || this.F == null || (dVar = this.f8048y) == null) {
            return;
        }
        dVar.a();
        if (this.F.w() == 1 && this.F != null && this.f8021c0 != null && this.H) {
            this.f8048y.f8010v.f8002d = 0.0f;
            ArrayList f2 = f();
            nd.a e9 = e(this.f8021c0, this.f8023d0);
            if (f2.size() != 0) {
                f2.add(0, e9);
                e9 = new nd.c0((nd.a[]) f2.toArray(new nd.a[f2.size()]));
            }
            int i5 = this.I;
            boolean z5 = i5 != -1;
            if (z5) {
                this.F.e(i5, this.J);
            }
            SimpleExoPlayer simpleExoPlayer = this.F;
            simpleExoPlayer.c0();
            com.google.android.exoplayer2.d dVar2 = simpleExoPlayer.f5286b;
            dVar2.x0();
            dVar2.x0();
            dVar2.p0(Collections.singletonList(e9), !z5);
            dVar2.a();
            this.H = false;
            j(this.f8048y);
        }
        q(!this.M);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onMetadata(Metadata metadata) {
        j jVar = this.f8022d;
        jVar.getClass();
        WritableArray createArray = Arguments.createArray();
        int i5 = 0;
        while (true) {
            dd.b[] bVarArr = metadata.f5427d;
            if (i5 >= bVarArr.length) {
                WritableMap createMap = Arguments.createMap();
                createMap.putArray("metadata", createArray);
                jVar.c("onTimedMetadata", createMap);
                return;
            }
            dd.b bVar = bVarArr[i5];
            if (bVar instanceof id.j) {
                id.j jVar2 = (id.j) bVar;
                String str = jVar2 instanceof n ? ((n) jVar2).f10648i : "";
                String str2 = jVar2.f10636d;
                WritableMap createMap2 = Arguments.createMap();
                createMap2.putString("identifier", str2);
                createMap2.putString("value", str);
                createArray.pushMap(createMap2);
            } else if (bVar instanceof fd.a) {
                fd.a aVar = (fd.a) bVar;
                WritableMap createMap3 = Arguments.createMap();
                createMap3.putString("identifier", aVar.f8493d);
                createMap3.putString("value", aVar.f8494e);
                createArray.pushMap(createMap3);
            }
            i5++;
        }
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlaybackParametersChanged(PlaybackParameters playbackParameters) {
        float f2 = playbackParameters.f5275d;
        j jVar = this.f8022d;
        jVar.getClass();
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("playbackRate", f2);
        jVar.c("onPlaybackRateChange", createMap);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayerError(PlaybackException playbackException) {
        boolean z5 = playbackException instanceof com.google.android.exoplayer2.c;
        j jVar = this.f8022d;
        if (!z5) {
            Log.e("PlaybackException with unrecognized class type", playbackException.toString());
            jVar.b("PlaybackException with unrecognized class type", playbackException);
            return;
        }
        com.google.android.exoplayer2.c cVar = (com.google.android.exoplayer2.c) playbackException;
        int i5 = cVar.f5343i;
        String i6 = k0.d.i(i5, "PlaybackException type : ");
        if (i5 == 1) {
            ke.b.k(i5 == 1);
            Throwable cause = cVar.getCause();
            cause.getClass();
            Exception exc = (Exception) cause;
            if (exc.getMessage() != null && exc.getMessage().contains("MediaCodecVideoRenderer")) {
                k();
                i();
                return;
            } else if (exc instanceof q) {
                q qVar = (q) exc;
                String str = qVar.f3448d;
                cd.o oVar = qVar.f3450i;
                i6 = oVar.a == null ? qVar.getCause() instanceof w ? getResources().getString(R.string.error_querying_decoders) : qVar.f3449e ? getResources().getString(R.string.error_no_secure_decoder, str) : getResources().getString(R.string.error_no_decoder, str) : getResources().getString(R.string.error_instantiating_decoder, oVar.a);
            }
        } else if (i5 == 0) {
            i6 = getResources().getString(R.string.unrecognized_media_format);
        }
        jVar.b(i6, playbackException);
        this.H = true;
        Log.e("ExoPlayer Exception", cVar.toString());
        if (i5 == 0) {
            ke.b.k(i5 == 0);
            Throwable cause2 = cVar.getCause();
            cause2.getClass();
            for (Throwable th2 = (IOException) cause2; th2 != null; th2 = th2.getCause()) {
                if ((th2 instanceof nd.b) || (th2 instanceof b0)) {
                    this.I = -1;
                    this.J = -9223372036854775807L;
                    i();
                    return;
                }
            }
        }
        u();
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPlayerStateChanged(boolean z5, int i5) {
        String str;
        String str2;
        String str3;
        double d6;
        String format;
        String str4 = "onStateChanged: playWhenReady=" + z5 + ", playbackState=";
        cd.d dVar = this.f8049y0;
        j jVar = this.f8022d;
        if (i5 == 1) {
            str = str4 + "idle";
            jVar.c("onVideoIdle", null);
            dVar.removeMessages(1);
            if (!z5) {
                setKeepScreenOn(false);
            }
        } else {
            if (i5 != 2) {
                if (i5 == 3) {
                    String str5 = str4 + "ready";
                    jVar.c("onReadyForDisplay", null);
                    if (this.N) {
                        this.N = false;
                        jVar.getClass();
                        WritableMap createMap = Arguments.createMap();
                        createMap.putBoolean("isBuffering", false);
                        jVar.c("onVideoBuffer", createMap);
                    }
                    dVar.sendEmptyMessage(1);
                    if (this.K) {
                        this.K = false;
                        String str6 = this.f8026f0;
                        Dynamic dynamic = this.f8027g0;
                        this.f8026f0 = str6;
                        this.f8027g0 = dynamic;
                        t(1, str6, dynamic);
                        String str7 = this.h0;
                        Dynamic dynamic2 = this.f8029i0;
                        this.h0 = str7;
                        this.f8029i0 = dynamic2;
                        t(2, str7, dynamic2);
                        String str8 = this.f8030j0;
                        Dynamic dynamic3 = this.f8031k0;
                        this.f8030j0 = str8;
                        this.f8031k0 = dynamic3;
                        t(3, str8, dynamic3);
                        SimpleExoPlayer simpleExoPlayer = this.F;
                        simpleExoPlayer.c0();
                        com.google.android.exoplayer2.d dVar2 = simpleExoPlayer.f5286b;
                        dVar2.x0();
                        Format format2 = dVar2.N;
                        int i6 = format2 != null ? format2.N : 0;
                        int i10 = format2 != null ? format2.O : 0;
                        String str9 = format2 != null ? format2.f5225d : "-1";
                        double duration = this.F.getDuration();
                        double S = this.F.S();
                        WritableArray createArray = Arguments.createArray();
                        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo = this.G.f9202c;
                        int h6 = h(1);
                        str3 = str5;
                        if (mappingTrackSelector$MappedTrackInfo != null && h6 != -1) {
                            a1 a1Var = mappingTrackSelector$MappedTrackInfo.f5464c[h6];
                            int i11 = 0;
                            while (i11 < a1Var.f15065d) {
                                Format format3 = a1Var.a(i11).f15211v[0];
                                a1 a1Var2 = a1Var;
                                WritableMap createMap2 = Arguments.createMap();
                                createMap2.putInt("index", i11);
                                int i12 = i11;
                                String str10 = format3.f5225d;
                                if (str10 == null) {
                                    str10 = "";
                                }
                                createMap2.putString(AlertFragment.ARG_TITLE, str10);
                                createMap2.putString("type", format3.I);
                                String str11 = format3.f5229i;
                                if (str11 == null) {
                                    str11 = "";
                                }
                                createMap2.putString("language", str11);
                                int i13 = format3.E;
                                if (i13 == -1) {
                                    d6 = S;
                                    format = "";
                                } else {
                                    d6 = S;
                                    format = String.format(Locale.US, "%.2fMbps", Float.valueOf(i13 / 1000000.0f));
                                }
                                createMap2.putString("bitrate", format);
                                createArray.pushMap(createMap2);
                                i11 = i12 + 1;
                                a1Var = a1Var2;
                                S = d6;
                            }
                        }
                        double d7 = S;
                        WritableArray createArray2 = Arguments.createArray();
                        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo2 = this.G.f9202c;
                        int h7 = h(3);
                        if (mappingTrackSelector$MappedTrackInfo2 != null && h7 != -1) {
                            a1 a1Var3 = mappingTrackSelector$MappedTrackInfo2.f5464c[h7];
                            int i14 = 0;
                            while (i14 < a1Var3.f15065d) {
                                Format format4 = a1Var3.a(i14).f15211v[0];
                                WritableMap createMap3 = Arguments.createMap();
                                createMap3.putInt("index", i14);
                                a1 a1Var4 = a1Var3;
                                String str12 = format4.f5225d;
                                if (str12 == null) {
                                    str12 = "";
                                }
                                createMap3.putString(AlertFragment.ARG_TITLE, str12);
                                createMap3.putString("type", format4.I);
                                String str13 = format4.f5229i;
                                if (str13 == null) {
                                    str13 = "";
                                }
                                createMap3.putString("language", str13);
                                createArray2.pushMap(createMap3);
                                i14++;
                                a1Var3 = a1Var4;
                            }
                        }
                        WritableArray createArray3 = Arguments.createArray();
                        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo3 = this.G.f9202c;
                        int h10 = h(2);
                        if (mappingTrackSelector$MappedTrackInfo3 != null && h10 != -1) {
                            a1 a1Var5 = mappingTrackSelector$MappedTrackInfo3.f5464c[h10];
                            int i15 = 0;
                            while (i15 < a1Var5.f15065d) {
                                z0 a = a1Var5.a(i15);
                                a1 a1Var6 = a1Var5;
                                int i16 = 0;
                                while (i16 < a.f15208d) {
                                    Format format5 = a.f15211v[i16];
                                    int i17 = i15;
                                    WritableMap createMap4 = Arguments.createMap();
                                    z0 z0Var = a;
                                    int i18 = format5.N;
                                    int i19 = i16;
                                    if (i18 == -1) {
                                        i18 = 0;
                                    }
                                    createMap4.putInt("width", i18);
                                    int i20 = format5.O;
                                    if (i20 == -1) {
                                        i20 = 0;
                                    }
                                    createMap4.putInt("height", i20);
                                    int i21 = format5.E;
                                    if (i21 == -1) {
                                        i21 = 0;
                                    }
                                    createMap4.putInt("bitrate", i21);
                                    String str14 = format5.F;
                                    if (str14 == null) {
                                        str14 = "";
                                    }
                                    createMap4.putString("codecs", str14);
                                    String str15 = format5.f5225d;
                                    if (str15 == null) {
                                        str15 = String.valueOf(i19);
                                    }
                                    createMap4.putString("trackId", str15);
                                    createArray3.pushMap(createMap4);
                                    i16 = i19 + 1;
                                    i15 = i17;
                                    a = z0Var;
                                }
                                i15++;
                                a1Var5 = a1Var6;
                            }
                        }
                        WritableMap createMap5 = Arguments.createMap();
                        createMap5.putDouble("duration", duration / 1000.0d);
                        createMap5.putDouble("currentTime", d7 / 1000.0d);
                        WritableMap createMap6 = Arguments.createMap();
                        createMap6.putInt("width", i6);
                        createMap6.putInt("height", i10);
                        if (i6 > i10) {
                            createMap6.putString("orientation", "landscape");
                        } else {
                            createMap6.putString("orientation", "portrait");
                        }
                        createMap5.putMap("naturalSize", createMap6);
                        createMap5.putString("trackId", str9);
                        createMap5.putArray("videoTracks", createArray3);
                        createMap5.putArray("audioTracks", createArray);
                        createMap5.putArray("textTracks", createArray2);
                        createMap5.putBoolean("canPlayFastForward", true);
                        createMap5.putBoolean("canPlaySlowForward", true);
                        createMap5.putBoolean("canPlaySlowReverse", true);
                        createMap5.putBoolean("canPlayReverse", true);
                        createMap5.putBoolean("canPlayFastForward", true);
                        createMap5.putBoolean("canStepBackward", true);
                        createMap5.putBoolean("canStepForward", true);
                        jVar.c("onVideoLoad", createMap5);
                    } else {
                        str3 = str5;
                    }
                    PlayerControlView playerControlView = this.f8042v;
                    if (playerControlView != null) {
                        playerControlView.e();
                    }
                    setKeepScreenOn(this.f8034n0);
                    str2 = str3;
                } else if (i5 != 4) {
                    str2 = k0.d.k(str4, JankScreenContext.UNKNOWN_SCREEN);
                } else {
                    str2 = str4 + "ended";
                    jVar.c("onVideoEnd", null);
                    if (this.L) {
                        n(false);
                    }
                    this.f8045w0.abandonAudioFocus(this);
                    setKeepScreenOn(false);
                }
                Log.d("ReactExoplayerView", str2);
            }
            str = k0.d.k(str4, "buffering");
            if (!this.N) {
                this.N = true;
                jVar.getClass();
                WritableMap createMap7 = Arguments.createMap();
                createMap7.putBoolean("isBuffering", true);
                jVar.c("onVideoBuffer", createMap7);
            }
            dVar.removeMessages(1);
            setKeepScreenOn(this.f8034n0);
        }
        str2 = str;
        Log.d("ReactExoplayerView", str2);
    }

    @Override // com.google.android.exoplayer2.h
    public final void onPositionDiscontinuity(Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
        j jVar = this.f8022d;
        if (i5 == 1) {
            long S = this.F.S();
            long j = positionInfo2.f5284x % 1000;
            jVar.getClass();
            WritableMap createMap = Arguments.createMap();
            createMap.putDouble("currentTime", S / 1000.0d);
            createMap.putDouble("seekTime", j / 1000.0d);
            jVar.c("onVideoSeek", createMap);
        }
        if (this.H) {
            u();
        }
        if (i5 == 0 && this.F.I() == 1) {
            jVar.c("onVideoEnd", null);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0016, code lost:
    
        if (r3 != 4) goto L18;
     */
    /* JADX WARN: Removed duplicated region for block: B:14:0x002c  */
    /* JADX WARN: Removed duplicated region for block: B:17:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void p(boolean z5) {
        this.M = z5;
        SimpleExoPlayer simpleExoPlayer = this.F;
        if (simpleExoPlayer == null) {
            return;
        }
        if (z5) {
            if (simpleExoPlayer != null && simpleExoPlayer.g()) {
                q(false);
            }
            setKeepScreenOn(false);
            return;
        }
        int w5 = simpleExoPlayer.w();
        if (w5 != 1) {
            if (w5 == 2 || w5 == 3) {
                if (!this.F.g()) {
                    q(true);
                }
            }
            if (this.f8033m0) {
                setKeepScreenOn(this.f8034n0);
                return;
            }
            return;
        }
        i();
        if (this.f8033m0) {
        }
    }

    public final void q(boolean z5) {
        SimpleExoPlayer simpleExoPlayer = this.F;
        if (simpleExoPlayer == null) {
            return;
        }
        if (!z5) {
            simpleExoPlayer.r(false);
            return;
        }
        boolean l6 = l();
        this.P = l6;
        if (l6) {
            this.F.r(true);
        }
    }

    @Override // nc.o
    public final void r(int i5, nd.s sVar) {
        Log.d("DRM Info", "onDrmKeysRestored");
    }

    @Override // android.view.View
    public final void setId(int i5) {
        super.setId(i5);
        this.f8022d.f8051b = i5;
    }

    public final void t(int i5, String str, Dynamic dynamic) {
        int h6;
        MappingTrackSelector$MappedTrackInfo mappingTrackSelector$MappedTrackInfo;
        int g6;
        if (this.F == null || (h6 = h(i5)) == -1 || (mappingTrackSelector$MappedTrackInfo = this.G.f9202c) == null) {
            return;
        }
        a1 a1Var = mappingTrackSelector$MappedTrackInfo.f5464c[h6];
        int[] iArr = {0};
        if (TextUtils.isEmpty(str)) {
            str = "default";
        }
        com.google.android.exoplayer2.trackselection.a c6 = this.G.c();
        c6.getClass();
        ge.g gVar = new ge.g(c6);
        gVar.d(h6, true);
        com.google.android.exoplayer2.trackselection.a aVar = new com.google.android.exoplayer2.trackselection.a(gVar);
        if (str.equals("disabled")) {
            this.G.h(aVar);
            return;
        }
        if (str.equals("language")) {
            g6 = 0;
            while (g6 < a1Var.f15065d) {
                String str2 = a1Var.a(g6).f15211v[0].f5229i;
                if (str2 != null && str2.equals(dynamic.asString())) {
                    break;
                } else {
                    g6++;
                }
            }
            g6 = -1;
        } else if (str.equals(AlertFragment.ARG_TITLE)) {
            g6 = 0;
            while (g6 < a1Var.f15065d) {
                String str3 = a1Var.a(g6).f15211v[0].f5225d;
                if (str3 != null && str3.equals(dynamic.asString())) {
                    break;
                } else {
                    g6++;
                }
            }
            g6 = -1;
        } else if (str.equals("index")) {
            if (dynamic.asInt() < a1Var.f15065d) {
                g6 = dynamic.asInt();
            }
            g6 = -1;
        } else if (str.equals("resolution")) {
            int asInt = dynamic.asInt();
            int i6 = -1;
            for (int i10 = 0; i10 < a1Var.f15065d; i10++) {
                z0 a = a1Var.a(i10);
                int i11 = 0;
                while (true) {
                    if (i11 >= a.f15208d) {
                        break;
                    }
                    if (a.f15211v[i11].O == asInt) {
                        iArr[0] = i11;
                        i6 = i10;
                        break;
                    }
                    i11++;
                }
            }
            g6 = i6;
        } else if (h6 != 3 || d0.a <= 18) {
            if (h6 == 1) {
                g6 = g(a1Var);
            }
            g6 = -1;
        } else {
            CaptioningManager captioningManager = (CaptioningManager) this.f8043v0.getSystemService("captioning");
            if (captioningManager != null && captioningManager.isEnabled()) {
                g6 = g(a1Var);
            }
            g6 = -1;
        }
        if (g6 == -1 && i5 == 2 && a1Var.f15065d != 0) {
            int i12 = a1Var.a(0).f15208d;
            iArr = new int[i12];
            for (int i13 = 0; i13 < i12; i13++) {
                iArr[i13] = i13;
            }
            g6 = 0;
        }
        if (g6 == -1) {
            this.G.h(aVar);
            return;
        }
        com.google.android.exoplayer2.trackselection.a c8 = this.G.c();
        c8.getClass();
        ge.g gVar2 = new ge.g(c8);
        gVar2.d(h6, false);
        gVar2.e(h6, a1Var, new ge.h(g6, 0, iArr));
        this.G.h(new com.google.android.exoplayer2.trackselection.a(gVar2));
    }

    public final void u() {
        this.I = this.F.D();
        this.J = this.F.Z() ? Math.max(0L, this.F.S()) : -9223372036854775807L;
    }

    @Override // com.google.android.exoplayer2.h
    public final void onLoadingChanged(boolean z5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onRepeatModeChanged(int i5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onShuffleModeEnabledChanged(boolean z5) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onTracksChanged(Tracks tracks) {
    }

    @Override // com.google.android.exoplayer2.h
    public final void onTimelineChanged(Timeline timeline, int i5) {
    }
}
