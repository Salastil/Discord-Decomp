package ge;

import android.content.Context;
import android.graphics.Point;
import android.hardware.display.DisplayManager;
import android.os.Looper;
import android.text.TextUtils;
import android.util.SparseArray;
import android.util.SparseBooleanArray;
import android.view.Display;
import android.view.WindowManager;
import android.view.accessibility.CaptioningManager;
import com.facebook.react.uimanager.ViewProps;
import fi.e0;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import ke.d0;
import nd.a1;

/* loaded from: classes3.dex */
public final class g extends t {
    public boolean A;
    public boolean B;
    public boolean C;
    public boolean D;
    public boolean E;
    public boolean F;
    public boolean G;
    public boolean H;
    public boolean I;
    public boolean J;
    public boolean K;
    public boolean L;
    public boolean M;
    public boolean N;
    public final SparseArray O;
    public final SparseBooleanArray P;

    public g(Context context) {
        Point point;
        Point point2;
        String[] split;
        DisplayManager displayManager;
        CaptioningManager captioningManager;
        int i5 = d0.a;
        if (i5 >= 19 && ((i5 >= 23 || Looper.myLooper() != null) && (captioningManager = (CaptioningManager) context.getSystemService("captioning")) != null && captioningManager.isEnabled())) {
            this.f9223t = 1088;
            Locale locale = captioningManager.getLocale();
            if (locale != null) {
                this.f9222s = e0.s(i5 >= 21 ? locale.toLanguageTag() : locale.toString());
            }
        }
        Display display = (i5 < 17 || (displayManager = (DisplayManager) context.getSystemService(ViewProps.DISPLAY)) == null) ? null : displayManager.getDisplay(0);
        if (display == null) {
            WindowManager windowManager = (WindowManager) context.getSystemService("window");
            windowManager.getClass();
            display = windowManager.getDefaultDisplay();
        }
        if (display.getDisplayId() == 0 && d0.H(context)) {
            String A = i5 < 28 ? d0.A("sys.display-size") : d0.A("vendor.display-size");
            if (!TextUtils.isEmpty(A)) {
                try {
                    split = A.trim().split("x", -1);
                } catch (NumberFormatException unused) {
                }
                if (split.length == 2) {
                    int parseInt = Integer.parseInt(split[0]);
                    int parseInt2 = Integer.parseInt(split[1]);
                    if (parseInt > 0 && parseInt2 > 0) {
                        point2 = new Point(parseInt, parseInt2);
                        b(point2.x, point2.y);
                        this.O = new SparseArray();
                        this.P = new SparseBooleanArray();
                        c();
                    }
                }
                ke.b.r("Util", "Invalid display size: " + A);
            }
            if ("Sony".equals(d0.f13295c) && d0.f13296d.startsWith("BRAVIA") && context.getPackageManager().hasSystemFeature("com.sony.dtv.hardware.panel.qfhd")) {
                point = new Point(3840, 2160);
                point2 = point;
                b(point2.x, point2.y);
                this.O = new SparseArray();
                this.P = new SparseBooleanArray();
                c();
            }
        }
        point = new Point();
        if (i5 >= 23) {
            Display.Mode mode = display.getMode();
            point.x = mode.getPhysicalWidth();
            point.y = mode.getPhysicalHeight();
        } else if (i5 >= 17) {
            display.getRealSize(point);
        } else {
            display.getSize(point);
        }
        point2 = point;
        b(point2.x, point2.y);
        this.O = new SparseArray();
        this.P = new SparseBooleanArray();
        c();
    }

    @Override // ge.t
    public final t b(int i5, int i6) {
        super.b(i5, i6);
        return this;
    }

    public final void c() {
        this.A = true;
        this.B = false;
        this.C = true;
        this.D = false;
        this.E = true;
        this.F = false;
        this.G = false;
        this.H = false;
        this.I = false;
        this.J = true;
        this.K = true;
        this.L = false;
        this.M = true;
        this.N = false;
    }

    public final void d(int i5, boolean z5) {
        SparseBooleanArray sparseBooleanArray = this.P;
        if (sparseBooleanArray.get(i5) == z5) {
            return;
        }
        if (z5) {
            sparseBooleanArray.put(i5, true);
        } else {
            sparseBooleanArray.delete(i5);
        }
    }

    public final void e(int i5, a1 a1Var, h hVar) {
        SparseArray sparseArray = this.O;
        Map map = (Map) sparseArray.get(i5);
        if (map == null) {
            map = new HashMap();
            sparseArray.put(i5, map);
        }
        if (map.containsKey(a1Var) && d0.a(map.get(a1Var), hVar)) {
            return;
        }
        map.put(a1Var, hVar);
    }

    public g(com.google.android.exoplayer2.trackselection.a aVar) {
        a(aVar);
        this.A = aVar.X;
        this.B = aVar.Y;
        this.C = aVar.Z;
        this.D = aVar.a0;
        this.E = aVar.f5477b0;
        this.F = aVar.f5478c0;
        this.G = aVar.f5479d0;
        this.H = aVar.f5480e0;
        this.I = aVar.f5481f0;
        this.J = aVar.f5482g0;
        this.K = aVar.h0;
        this.L = aVar.f5483i0;
        this.M = aVar.f5484j0;
        this.N = aVar.f5485k0;
        SparseArray sparseArray = aVar.f5486l0;
        SparseArray sparseArray2 = new SparseArray();
        for (int i5 = 0; i5 < sparseArray.size(); i5++) {
            sparseArray2.put(sparseArray.keyAt(i5), new HashMap((Map) sparseArray.valueAt(i5)));
        }
        this.O = sparseArray2;
        this.P = aVar.f5487m0.clone();
    }

    public g() {
        this.O = new SparseArray();
        this.P = new SparseBooleanArray();
        c();
    }
}
