package wl;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.widget.EditText;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.c1;
import androidx.core.view.d1;
import androidx.core.view.k0;
import androidx.core.view.m1;
import androidx.core.view.r;
import androidx.core.view.s0;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.WeakHashMap;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import xe.k;

/* loaded from: classes3.dex */
public final class f extends d1 implements r {
    public boolean E;
    public boolean F;
    public boolean G;
    public int H;
    public int I;
    public i J;
    public final HashSet K;
    public boolean L;
    public final e M;
    public final k N;

    /* renamed from: d, reason: collision with root package name */
    public final bm.d f19885d;

    /* renamed from: e, reason: collision with root package name */
    public final ViewGroup f19886e;

    /* renamed from: i, reason: collision with root package name */
    public final ThemedReactContext f19887i;

    /* renamed from: v, reason: collision with root package name */
    public final g f19888v;

    /* renamed from: w, reason: collision with root package name */
    public final int f19889w;

    /* renamed from: x, reason: collision with root package name */
    public double f19890x;

    /* renamed from: y, reason: collision with root package name */
    public double f19891y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v4, types: [android.view.ViewTreeObserver$OnGlobalFocusChangeListener, wl.e] */
    public f(bm.d eventPropagationView, ViewGroup view, ThemedReactContext themedReactContext, g config) {
        super(1);
        Intrinsics.checkNotNullParameter(eventPropagationView, "eventPropagationView");
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(config, "config");
        config.getClass();
        this.f19885d = eventPropagationView;
        this.f19886e = view;
        this.f19887i = themedReactContext;
        this.f19888v = config;
        this.f19889w = UIManagerHelper.getSurfaceId(eventPropagationView);
        this.I = -1;
        this.K = new HashSet();
        ?? r5 = new ViewTreeObserver.OnGlobalFocusChangeListener() { // from class: wl.e
            @Override // android.view.ViewTreeObserver.OnGlobalFocusChangeListener
            public final void onGlobalFocusChanged(View view2, View view3) {
                if (view3 instanceof EditText) {
                    int id2 = ((EditText) view3).getId();
                    f fVar = f.this;
                    fVar.I = id2;
                    bm.d dVar = fVar.f19885d;
                    ThemedReactContext themedReactContext2 = fVar.f19887i;
                    if (!fVar.E || view2 == null) {
                        return;
                    }
                    tl.b.a(themedReactContext2, dVar.getId(), new sl.c(fVar.f19889w, dVar.getId(), sl.c.F, fVar.f19890x, 1.0d, 0, fVar.I));
                    tl.b.a(themedReactContext2, dVar.getId(), new sl.c(fVar.f19889w, dVar.getId(), sl.c.G, fVar.f19890x, 1.0d, 0, fVar.I));
                    tl.b.b(themedReactContext2, "KeyboardController::keyboardWillShow", fVar.d(fVar.f19890x));
                    tl.b.b(themedReactContext2, "KeyboardController::keyboardDidShow", fVar.d(fVar.f19890x));
                }
            }
        };
        this.M = r5;
        this.N = new k(view, eventPropagationView, themedReactContext);
        view.getViewTreeObserver().addOnGlobalFocusChangeListener(r5);
    }

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View v5, WindowInsetsCompat insets) {
        Intrinsics.checkNotNullParameter(v5, "v");
        Intrinsics.checkNotNullParameter(insets, "insets");
        double c6 = c();
        boolean z5 = this.E && e();
        boolean z6 = this.F || android.support.v4.media.session.b.a;
        boolean z7 = z5 && !z6;
        boolean z8 = this.f19890x == c6;
        if (!z6 && !this.G) {
            g(Boolean.valueOf(e()), Double.valueOf(c6));
        }
        if (z7 && !z8 && !h.a) {
            String message = "onApplyWindowInsets: " + this.f19890x + " -> " + c6;
            Intrinsics.checkNotNullParameter(message, "message");
            f(c6);
        }
        return insets;
    }

    public final void b() {
        i iVar = this.J;
        if (iVar == null) {
            return;
        }
        this.J = null;
        bm.d dVar = this.f19885d;
        tl.b.a(this.f19887i, dVar.getId(), new sl.c(this.f19889w, dVar.getId(), sl.c.F, iVar.a, iVar.f19892b, iVar.f19893c, iVar.f19894d));
    }

    public final double c() {
        Insets f2;
        Insets f10;
        WeakHashMap weakHashMap = s0.a;
        WindowInsetsCompat a = k0.a(this.f19886e);
        int i5 = 0;
        int i6 = (a == null || (f10 = a.a.f(8)) == null) ? 0 : f10.f1514d;
        if (!this.f19888v.a && a != null && (f2 = a.a.f(2)) != null) {
            i5 = f2.f1514d;
        }
        double c6 = tl.c.c(i6 - i5);
        if (c6 < 0.0d) {
            return 0.0d;
        }
        return c6;
    }

    public final WritableMap d(double d6) {
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("height", d6);
        createMap.putInt("duration", this.H);
        createMap.putDouble("timestamp", System.currentTimeMillis());
        createMap.putInt("target", this.I);
        createMap.putString("type", null);
        ThemedReactContext themedReactContext = this.f19887i;
        String str = "light";
        if (themedReactContext != null && tl.a.b(themedReactContext)) {
            str = "dark";
        }
        createMap.putString("appearance", str);
        return createMap;
    }

    public final boolean e() {
        WeakHashMap weakHashMap = s0.a;
        WindowInsetsCompat a = k0.a(this.f19886e);
        if (a != null) {
            return a.a.p(8);
        }
        return false;
    }

    public final void f(double d6) {
        this.H = 0;
        WritableMap d7 = d(d6);
        ThemedReactContext themedReactContext = this.f19887i;
        tl.b.b(themedReactContext, "KeyboardController::keyboardWillShow", d7);
        Iterator it = c0.g(sl.c.F, sl.c.E, sl.c.G).iterator();
        while (true) {
            boolean hasNext = it.hasNext();
            bm.d dVar = this.f19885d;
            if (!hasNext) {
                tl.b.b(themedReactContext, "KeyboardController::keyboardDidShow", d(d6));
                int[] iArr = {dVar.getId()};
                WritableArray createArray = Arguments.createArray();
                createArray.pushInt(iArr[0]);
                WritableMap createMap = Arguments.createMap();
                createMap.putArray("tags", createArray);
                tl.b.b(themedReactContext, "onUserDrivenAnimationEnded", createMap);
                this.f19890x = d6;
                return;
            }
            sl.b bVar = (sl.b) it.next();
            tl.b.a(themedReactContext, dVar.getId(), new sl.c(this.f19889w, dVar.getId(), bVar, d6, 1.0d, 0, this.I));
        }
    }

    public final void g(Boolean bool, Double d6) {
        double doubleValue = d6 != null ? d6.doubleValue() : c();
        boolean booleanValue = bool != null ? bool.booleanValue() : e();
        this.E = booleanValue;
        this.f19891y = doubleValue;
        this.F = false;
        this.H = 0;
        this.J = null;
        String concat = "KeyboardController::".concat(!booleanValue ? "keyboardDidHide" : "keyboardDidShow");
        WritableMap d7 = d(doubleValue);
        ThemedReactContext themedReactContext = this.f19887i;
        tl.b.b(themedReactContext, concat, d7);
        for (sl.b bVar : c0.g(sl.c.E, sl.c.G)) {
            bm.d dVar = this.f19885d;
            tl.b.a(themedReactContext, dVar.getId(), new sl.c(this.f19889w, dVar.getId(), bVar, doubleValue, !this.E ? 0.0d : 1.0d, this.H, this.I));
        }
    }

    @Override // androidx.core.view.d1
    public final void onEnd(m1 animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        if (!tl.c.e(animation) || this.L) {
            return;
        }
        this.G = false;
        this.F = false;
        int a = (int) animation.a.a();
        this.H = a;
        d dVar = new d(0, this, animation);
        if (a == -1) {
            this.f19886e.postDelayed(dVar, rl.b.a);
        } else {
            dVar.run();
        }
    }

    @Override // androidx.core.view.d1
    public final void onPrepare(m1 animation) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        super.onPrepare(animation);
        if (tl.c.e(animation)) {
            this.G = true;
        }
    }

    @Override // androidx.core.view.d1
    public final WindowInsetsCompat onProgress(WindowInsetsCompat insets, List runningAnimations) {
        Object obj;
        Intrinsics.checkNotNullParameter(insets, "insets");
        Intrinsics.checkNotNullParameter(runningAnimations, "runningAnimations");
        Iterator it = runningAnimations.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            m1 m1Var = (m1) obj;
            if (tl.c.e(m1Var) && !this.K.contains(m1Var)) {
                break;
            }
        }
        boolean z5 = obj == null;
        if (!this.L && !z5) {
            g gVar = this.f19888v;
            gVar.getClass();
            Insets f2 = insets.a.f(8);
            Intrinsics.checkNotNullExpressionValue(f2, "getInsets(...)");
            Insets f10 = insets.a.f(519);
            Intrinsics.checkNotNullExpressionValue(f10, "getInsets(...)");
            boolean z6 = gVar.a;
            Insets NONE = Insets.f1511e;
            if (z6) {
                Intrinsics.checkNotNullExpressionValue(NONE, "NONE");
                f10 = NONE;
            }
            Insets a = Insets.a(Insets.b(f2.a - f10.a, f2.f1512b - f10.f1512b, f2.f1513c - f10.f1513c, f2.f1514d - f10.f1514d), NONE);
            Intrinsics.checkNotNullExpressionValue(a, "let(...)");
            float f11 = a.f1514d - a.f1512b;
            double c6 = tl.c.c(f11);
            double d6 = 0.0d;
            try {
                double abs = Math.abs(c6 / this.f19890x);
                if (!Double.isNaN(abs)) {
                    if (!Double.isInfinite(abs)) {
                        d6 = abs;
                    }
                }
            } catch (ArithmeticException e9) {
                boolean z7 = h.a;
                String message = "Caught arithmetic exception during `progress` calculation: " + e9;
                Intrinsics.checkNotNullParameter(message, "message");
            }
            double d7 = d6;
            boolean z8 = h.a;
            String message2 = "DiffY: " + f11 + " " + c6 + " " + d7 + " " + android.support.v4.media.session.b.a + " " + this.I;
            Intrinsics.checkNotNullParameter(message2, "message");
            b();
            if (this.F) {
                sl.b bVar = android.support.v4.media.session.b.a ? sl.c.H : sl.c.E;
                bm.d dVar = this.f19885d;
                tl.b.a(this.f19887i, dVar.getId(), new sl.c(this.f19889w, dVar.getId(), bVar, c6, d7, this.H, this.I));
            }
        }
        return insets;
    }

    @Override // androidx.core.view.d1
    public final c1 onStart(m1 animation, c1 bounds) {
        Intrinsics.checkNotNullParameter(animation, "animation");
        Intrinsics.checkNotNullParameter(bounds, "bounds");
        if (tl.c.e(animation) && !this.L) {
            boolean z5 = false;
            this.G = false;
            this.F = true;
            this.J = null;
            this.E = e();
            this.H = (int) animation.a.a();
            double c6 = c();
            boolean z6 = this.E;
            if (z6) {
                this.f19890x = c6;
            }
            boolean z7 = (c6 == 0.0d || this.f19891y == c6) ? false : true;
            if (z6 && this.f19891y != 0.0d) {
                z5 = true;
            }
            if (z7 && z5 && h.a) {
                f(c6);
                this.K.add(animation);
                return bounds;
            }
            tl.b.b(this.f19887i, "KeyboardController::".concat(!z6 ? "keyboardWillHide" : "keyboardWillShow"), d(c6));
            boolean z8 = h.a;
            String message = "HEIGHT:: " + c6 + " TAG:: " + this.I;
            Intrinsics.checkNotNullParameter(message, "message");
            this.J = new i(c6, this.E ? 1.0d : 0.0d, this.H, this.I);
            Intrinsics.checkNotNullExpressionValue(bounds, "onStart(...)");
        }
        return bounds;
    }
}
