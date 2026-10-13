package v4;

import android.graphics.Color;
import android.graphics.PointF;
import java.util.ArrayList;

/* loaded from: classes.dex */
public abstract class n {
    public static final e4.e a = e4.e.x("x", "y");

    public static int a(w4.a aVar) {
        aVar.c();
        int r5 = (int) (aVar.r() * 255.0d);
        int r7 = (int) (aVar.r() * 255.0d);
        int r10 = (int) (aVar.r() * 255.0d);
        while (aVar.o()) {
            aVar.R();
        }
        aVar.g();
        return Color.argb(255, r5, r7, r10);
    }

    public static PointF b(w4.a aVar, float f2) {
        int b10 = f0.e.b(aVar.A());
        if (b10 == 0) {
            aVar.c();
            float r5 = (float) aVar.r();
            float r7 = (float) aVar.r();
            while (aVar.A() != 2) {
                aVar.R();
            }
            aVar.g();
            return new PointF(r5 * f2, r7 * f2);
        }
        if (b10 != 2) {
            if (b10 != 6) {
                throw new IllegalArgumentException("Unknown point starts with ".concat(s4.h.n(aVar.A())));
            }
            float r10 = (float) aVar.r();
            float r11 = (float) aVar.r();
            while (aVar.o()) {
                aVar.R();
            }
            return new PointF(r10 * f2, r11 * f2);
        }
        aVar.f();
        float f10 = 0.0f;
        float f11 = 0.0f;
        while (aVar.o()) {
            int P = aVar.P(a);
            if (P == 0) {
                f10 = d(aVar);
            } else if (P != 1) {
                aVar.Q();
                aVar.R();
            } else {
                f11 = d(aVar);
            }
        }
        aVar.i();
        return new PointF(f10 * f2, f11 * f2);
    }

    public static ArrayList c(w4.a aVar, float f2) {
        ArrayList arrayList = new ArrayList();
        aVar.c();
        while (aVar.A() == 1) {
            aVar.c();
            arrayList.add(b(aVar, f2));
            aVar.g();
        }
        aVar.g();
        return arrayList;
    }

    public static float d(w4.a aVar) {
        int A = aVar.A();
        int b10 = f0.e.b(A);
        if (b10 != 0) {
            if (b10 == 6) {
                return (float) aVar.r();
            }
            throw new IllegalArgumentException("Unknown value for token of type ".concat(s4.h.n(A)));
        }
        aVar.c();
        float r5 = (float) aVar.r();
        while (aVar.o()) {
            aVar.R();
        }
        aVar.g();
        return r5;
    }
}
