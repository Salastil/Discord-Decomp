package com.budiyev.android.codescanner;

import android.content.Context;
import android.hardware.Camera;
import android.os.Handler;
import android.view.SurfaceHolder;
import com.discord.qr.scanner.QRScanner;
import h5.b;
import h5.d;
import h5.e;
import h5.f;
import h5.g;
import h5.n;
import h5.o;
import h5.q;
import h5.s;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import jj.a;
import u4.c;
import ve.i;

/* loaded from: classes.dex */
public final class CodeScanner {
    public static final List H;
    public static final List I;
    public static final List J;
    public static final List K;
    public static final int L;
    public static final int M;

    /* renamed from: b, reason: collision with root package name */
    public final Context f3695b;

    /* renamed from: d, reason: collision with root package name */
    public final CodeScannerView f3697d;

    /* renamed from: e, reason: collision with root package name */
    public final SurfaceHolder f3698e;
    public final Object a = new Object();

    /* renamed from: n, reason: collision with root package name */
    public volatile List f3705n = K;
    public volatile int F = L;
    public volatile int G = M;

    /* renamed from: o, reason: collision with root package name */
    public volatile QRScanner f3706o = null;

    /* renamed from: p, reason: collision with root package name */
    public volatile QRScanner f3707p = null;

    /* renamed from: q, reason: collision with root package name */
    public volatile o f3708q = null;

    /* renamed from: r, reason: collision with root package name */
    public volatile boolean f3709r = false;

    /* renamed from: s, reason: collision with root package name */
    public volatile boolean f3710s = false;

    /* renamed from: t, reason: collision with root package name */
    public volatile boolean f3711t = false;

    /* renamed from: u, reason: collision with root package name */
    public volatile boolean f3712u = true;

    /* renamed from: v, reason: collision with root package name */
    public volatile boolean f3713v = false;

    /* renamed from: w, reason: collision with root package name */
    public volatile int f3714w = -1;

    /* renamed from: x, reason: collision with root package name */
    public boolean f3715x = false;

    /* renamed from: y, reason: collision with root package name */
    public boolean f3716y = false;

    /* renamed from: z, reason: collision with root package name */
    public boolean f3717z = false;
    public boolean A = false;
    public boolean B = false;
    public int C = 0;
    public int D = 0;
    public int E = 0;

    /* renamed from: c, reason: collision with root package name */
    public final Handler f3696c = new Handler();

    /* renamed from: f, reason: collision with root package name */
    public final g f3699f = new g(this);

    /* renamed from: g, reason: collision with root package name */
    public final d f3700g = new d(this);

    /* renamed from: h, reason: collision with root package name */
    public final e f3701h = new e(this, 1);

    /* renamed from: i, reason: collision with root package name */
    public final e f3702i = new e(this, 0);
    public final f j = new f(this, 0);
    public final f k = new f(this, 1);

    /* renamed from: l, reason: collision with root package name */
    public final c f3703l = new c(this);

    /* renamed from: m, reason: collision with root package name */
    public final b f3704m = new b(this);

    static {
        List unmodifiableList = Collections.unmodifiableList(Arrays.asList(a.values()));
        H = unmodifiableList;
        I = Collections.unmodifiableList(Arrays.asList(a.f12778e, a.f12779i, a.f12780v, a.f12781w, a.f12783y, a.E, a.F, a.J, a.K, a.L, a.M, a.N));
        J = Collections.unmodifiableList(Arrays.asList(a.f12777d, a.f12782x, a.G, a.H, a.I));
        K = unmodifiableList;
        L = 1;
        M = 1;
    }

    public CodeScanner(Context context, CodeScannerView codeScannerView) {
        this.f3695b = context;
        this.f3697d = codeScannerView;
        this.f3698e = codeScannerView.getPreviewView().getHolder();
        codeScannerView.setCodeScanner(this);
        codeScannerView.setSizeListener(new i(this));
    }

    public final void a(int i5, int i6) {
        this.D = i5;
        this.E = i6;
        if (i5 <= 0 || i6 <= 0) {
            this.B = true;
            return;
        }
        this.f3709r = true;
        this.B = false;
        h5.c cVar = new h5.c(this, i5, i6);
        cVar.setUncaughtExceptionHandler(this.f3704m);
        cVar.start();
    }

    public final void b() {
        if (this.f3710s) {
            if (this.f3716y && this.f3710s && this.f3716y) {
                this.f3698e.removeCallback(this.f3699f);
                j(false);
            }
            c();
        }
    }

    public final void c() {
        this.f3710s = false;
        this.f3709r = false;
        this.f3711t = false;
        this.f3716y = false;
        this.f3717z = false;
        o oVar = this.f3708q;
        if (oVar != null) {
            this.f3708q = null;
            oVar.a.release();
            n nVar = oVar.f9549b;
            nVar.f9542b.interrupt();
            nVar.f9547g = null;
        }
    }

    public final void d() {
        if (this.A) {
            return;
        }
        this.A = true;
        this.f3696c.postDelayed(this.j, 2000L);
    }

    public final void e(boolean z5) {
        synchronized (this.a) {
            try {
                boolean z6 = this.f3712u != z5;
                this.f3712u = z5;
                this.f3697d.setAutoFocusEnabled(z5);
                o oVar = this.f3708q;
                if (this.f3710s && this.f3716y && z6 && oVar != null && oVar.f9555h) {
                    f(z5);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0072  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0077  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0078  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0074  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void f(boolean z5) {
        s frameRect;
        boolean z6;
        try {
            o oVar = this.f3708q;
            if (oVar != null) {
                Camera camera = oVar.a;
                camera.cancelAutoFocus();
                this.f3715x = false;
                Camera.Parameters parameters = camera.getParameters();
                int i5 = this.G;
                if (z5) {
                    e4.f.H(parameters, i5);
                } else {
                    List<String> supportedFocusModes = parameters.getSupportedFocusModes();
                    if (supportedFocusModes != null && !supportedFocusModes.isEmpty()) {
                        String focusMode = parameters.getFocusMode();
                        if (supportedFocusModes.contains("fixed")) {
                            if (!"fixed".equals(focusMode)) {
                                parameters.setFocusMode("fixed");
                            }
                        } else if (supportedFocusModes.contains("auto") && !"auto".equals(focusMode)) {
                            parameters.setFocusMode("auto");
                        }
                    }
                }
                if (z5 && (frameRect = this.f3697d.getFrameRect()) != null) {
                    q qVar = oVar.f9550c;
                    q qVar2 = oVar.f9551d;
                    q qVar3 = oVar.f9552e;
                    int i6 = qVar.a;
                    int i10 = qVar.f9557b;
                    int i11 = oVar.f9553f;
                    if (i11 != 90 && i11 != 270) {
                        z6 = false;
                        int i12 = !z6 ? i10 : i6;
                        if (z6) {
                            i6 = i10;
                        }
                        e4.f.n(parameters, e4.f.t(i12, i6, frameRect, qVar2, qVar3), i12, i6, i11);
                    }
                    z6 = true;
                    if (!z6) {
                    }
                    if (z6) {
                    }
                    e4.f.n(parameters, e4.f.t(i12, i6, frameRect, qVar2, qVar3), i12, i6, i11);
                }
                camera.setParameters(parameters);
                if (z5) {
                    this.C = 0;
                    this.f3717z = false;
                    if (i5 == 1) {
                        d();
                    }
                }
            }
        } catch (Exception unused) {
        }
    }

    public final void g(boolean z5) {
        Camera camera;
        Camera.Parameters parameters;
        try {
            o oVar = this.f3708q;
            if (oVar != null && (parameters = (camera = oVar.a).getParameters()) != null) {
                if (z5) {
                    e4.f.I(parameters, "torch");
                } else {
                    e4.f.I(parameters, "off");
                }
                camera.setParameters(parameters);
            }
        } catch (Exception unused) {
        }
    }

    public final void h() {
        synchronized (this.a) {
            try {
                if (!this.f3710s && !this.f3709r) {
                    CodeScannerView codeScannerView = this.f3697d;
                    a(codeScannerView.getWidth(), codeScannerView.getHeight());
                } else {
                    if (this.f3716y) {
                        return;
                    }
                    this.f3698e.addCallback(this.f3699f);
                    i(false);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void i(boolean z5) {
        try {
            o oVar = this.f3708q;
            if (oVar != null) {
                Camera camera = oVar.a;
                camera.setPreviewCallback(this.f3700g);
                camera.setPreviewDisplay(this.f3698e);
                if (!z5 && oVar.f9556i && this.f3713v) {
                    g(true);
                }
                camera.startPreview();
                this.f3711t = false;
                this.f3716y = true;
                this.f3717z = false;
                this.C = 0;
                if (oVar.f9555h && this.f3712u) {
                    s frameRect = this.f3697d.getFrameRect();
                    if (frameRect != null) {
                        Camera.Parameters parameters = camera.getParameters();
                        q qVar = oVar.f9550c;
                        q qVar2 = oVar.f9551d;
                        q qVar3 = oVar.f9552e;
                        int i5 = qVar.a;
                        int i6 = qVar.f9557b;
                        int i10 = oVar.f9553f;
                        boolean z6 = i10 == 90 || i10 == 270;
                        int i11 = z6 ? i6 : i5;
                        if (!z6) {
                            i5 = i6;
                        }
                        e4.f.n(parameters, e4.f.t(i11, i5, frameRect, qVar2, qVar3), i11, i5, i10);
                        camera.setParameters(parameters);
                    }
                    if (this.G == 1) {
                        d();
                    }
                }
            }
        } catch (Exception unused) {
        }
    }

    public final void j(boolean z5) {
        try {
            o oVar = this.f3708q;
            if (oVar != null) {
                Camera camera = oVar.a;
                camera.cancelAutoFocus();
                Camera.Parameters parameters = camera.getParameters();
                if (!z5 && oVar.f9556i && this.f3713v) {
                    e4.f.I(parameters, "off");
                }
                camera.setParameters(parameters);
                camera.setPreviewCallback(null);
                camera.stopPreview();
            }
        } catch (Exception unused) {
        }
        this.f3711t = false;
        this.f3716y = false;
        this.f3717z = false;
        this.C = 0;
    }
}
