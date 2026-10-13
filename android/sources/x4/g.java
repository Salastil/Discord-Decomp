package x4;

import android.graphics.Path;
import android.graphics.PointF;
import java.util.ArrayList;
import n4.k;
import s4.l;

/* loaded from: classes.dex */
public abstract class g {
    public static final PointF a = new PointF();

    public static PointF a(PointF pointF, PointF pointF2) {
        return new PointF(pointF.x + pointF2.x, pointF.y + pointF2.y);
    }

    public static float b(float f2, float f10, float f11) {
        return Math.max(f10, Math.min(f11, f2));
    }

    public static int c(float f2, float f10) {
        int i5 = (int) f2;
        int i6 = (int) f10;
        int i10 = i5 / i6;
        int i11 = i5 % i6;
        if (!((i5 ^ i6) >= 0) && i11 != 0) {
            i10--;
        }
        return i5 - (i6 * i10);
    }

    public static void d(l lVar, Path path) {
        Path path2;
        path.reset();
        PointF pointF = lVar.f17788b;
        ArrayList arrayList = lVar.a;
        path.moveTo(pointF.x, pointF.y);
        float f2 = pointF.x;
        float f10 = pointF.y;
        PointF pointF2 = a;
        pointF2.set(f2, f10);
        int i5 = 0;
        while (i5 < arrayList.size()) {
            q4.a aVar = (q4.a) arrayList.get(i5);
            PointF pointF3 = aVar.a;
            PointF pointF4 = aVar.f16661b;
            PointF pointF5 = aVar.f16662c;
            if (pointF3.equals(pointF2) && pointF4.equals(pointF5)) {
                path.lineTo(pointF5.x, pointF5.y);
                path2 = path;
            } else {
                path2 = path;
                path2.cubicTo(pointF3.x, pointF3.y, pointF4.x, pointF4.y, pointF5.x, pointF5.y);
            }
            pointF2.set(pointF5.x, pointF5.y);
            i5++;
            path = path2;
        }
        Path path3 = path;
        if (lVar.f17789c) {
            path3.close();
        }
    }

    public static float e(float f2, float f10, float f11) {
        return k0.d.c(f10, f2, f11, f2);
    }

    public static void f(q4.e eVar, int i5, ArrayList arrayList, q4.e eVar2, k kVar) {
        if (eVar.a(i5, kVar.getName())) {
            String name = kVar.getName();
            q4.e eVar3 = new q4.e(eVar2);
            eVar3.a.add(name);
            q4.e eVar4 = new q4.e(eVar3);
            eVar4.f16681b = kVar;
            arrayList.add(eVar4);
        }
    }
}
