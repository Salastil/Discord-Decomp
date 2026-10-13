package gh;

import android.animation.TimeInterpolator;
import android.graphics.PointF;
import android.graphics.Rect;
import android.util.Property;
import android.view.View;
import java.util.ArrayList;
import m3.d0;

/* loaded from: classes3.dex */
public final class g extends Property {
    public final /* synthetic */ int a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ g(Class cls, String str, int i5) {
        super(cls, str);
        this.a = i5;
    }

    @Override // android.util.Property
    public final Object get(Object obj) {
        switch (this.a) {
            case 0:
                return Float.valueOf(((h) obj).f9274h);
            case 1:
                return Float.valueOf(((h) obj).f9275i);
            case 2:
                return Float.valueOf(((j) obj).f9286h);
            case 3:
                return Float.valueOf(((j) obj).f9287i);
            case 4:
                return Float.valueOf(((o) obj).b());
            case 5:
                return null;
            case 6:
                return null;
            case 7:
                return null;
            case 8:
                return null;
            case 9:
                return null;
            case 10:
                return Float.valueOf(d0.a.H((View) obj));
            default:
                return ((View) obj).getClipBounds();
        }
    }

    @Override // android.util.Property
    public final void set(Object obj, Object obj2) {
        switch (this.a) {
            case 0:
                h hVar = (h) obj;
                float floatValue = ((Float) obj2).floatValue();
                hVar.f9274h = floatValue;
                int i5 = (int) (floatValue * 5400.0f);
                q2.a aVar = hVar.f9271e;
                ArrayList arrayList = (ArrayList) hVar.f9324b;
                p pVar = (p) arrayList.get(0);
                float f2 = hVar.f9274h * 1520.0f;
                pVar.a = (-20.0f) + f2;
                pVar.f9312b = f2;
                for (int i6 = 0; i6 < 4; i6++) {
                    pVar.f9312b = (aVar.getInterpolation(s.g(i5, h.k[i6], 667)) * 250.0f) + pVar.f9312b;
                    pVar.a = (aVar.getInterpolation(s.g(i5, h.f9265l[i6], 667)) * 250.0f) + pVar.a;
                }
                float f10 = pVar.a;
                float f11 = pVar.f9312b;
                pVar.a = (((f11 - f10) * hVar.f9275i) + f10) / 360.0f;
                pVar.f9312b = f11 / 360.0f;
                int i10 = 0;
                while (true) {
                    if (i10 < 4) {
                        float g6 = s.g(i5, h.f9266m[i10], 333);
                        if (g6 <= 0.0f || g6 >= 1.0f) {
                            i10++;
                        } else {
                            int i11 = i10 + hVar.f9273g;
                            int[] iArr = hVar.f9272f.f9291e;
                            int length = i11 % iArr.length;
                            int length2 = (length + 1) % iArr.length;
                            ((p) arrayList.get(0)).f9313c = mg.b.a(aVar.getInterpolation(g6), Integer.valueOf(iArr[length]), Integer.valueOf(iArr[length2])).intValue();
                        }
                    }
                }
                ((t) hVar.a).invalidateSelf();
                break;
            case 1:
                ((h) obj).f9275i = ((Float) obj2).floatValue();
                break;
            case 2:
                j jVar = (j) obj;
                float floatValue2 = ((Float) obj2).floatValue();
                jVar.f9286h = floatValue2;
                int i12 = (int) (floatValue2 * 6000.0f);
                TimeInterpolator timeInterpolator = jVar.f9283e;
                ArrayList arrayList2 = (ArrayList) jVar.f9324b;
                p pVar2 = (p) arrayList2.get(0);
                float f12 = jVar.f9286h * 1080.0f;
                int[] iArr2 = j.f9277l;
                float f13 = 0.0f;
                for (int i13 : iArr2) {
                    f13 += timeInterpolator.getInterpolation(s.g(i12, i13, 500)) * 90.0f;
                }
                pVar2.f9316f = f12 + f13;
                float interpolation = timeInterpolator.getInterpolation(s.g(i12, 0, 3000)) - timeInterpolator.getInterpolation(s.g(i12, 3000, 3000));
                pVar2.a = 0.0f;
                float[] fArr = j.f9278m;
                float q5 = tn.g.q(fArr[0], fArr[1], interpolation);
                pVar2.f9312b = q5;
                float f14 = jVar.f9287i;
                if (f14 > 0.0f) {
                    pVar2.f9312b = (1.0f - f14) * q5;
                }
                int i14 = 0;
                while (true) {
                    if (i14 < iArr2.length) {
                        float g10 = s.g(i12, iArr2[i14], 100);
                        if (g10 < 0.0f || g10 > 1.0f) {
                            i14++;
                        } else {
                            int i15 = i14 + jVar.f9285g;
                            int[] iArr3 = jVar.f9284f.f9291e;
                            int length3 = i15 % iArr3.length;
                            int length4 = (length3 + 1) % iArr3.length;
                            ((p) arrayList2.get(0)).f9313c = mg.b.a(timeInterpolator.getInterpolation(g10), Integer.valueOf(iArr3[length3]), Integer.valueOf(iArr3[length4])).intValue();
                        }
                    }
                }
                ((t) jVar.a).invalidateSelf();
                break;
            case 3:
                ((j) obj).f9287i = ((Float) obj2).floatValue();
                break;
            case 4:
                o oVar = (o) obj;
                float floatValue3 = ((Float) obj2).floatValue();
                if (oVar.F != floatValue3) {
                    oVar.F = floatValue3;
                    oVar.invalidateSelf();
                    break;
                }
                break;
            case 5:
                m3.d dVar = (m3.d) obj;
                PointF pointF = (PointF) obj2;
                dVar.getClass();
                dVar.a = Math.round(pointF.x);
                int round = Math.round(pointF.y);
                dVar.f14337b = round;
                int i16 = dVar.f14341f + 1;
                dVar.f14341f = i16;
                if (i16 == dVar.f14342g) {
                    d0.a(dVar.f14340e, dVar.a, round, dVar.f14338c, dVar.f14339d);
                    dVar.f14341f = 0;
                    dVar.f14342g = 0;
                    break;
                }
                break;
            case 6:
                m3.d dVar2 = (m3.d) obj;
                PointF pointF2 = (PointF) obj2;
                dVar2.getClass();
                dVar2.f14338c = Math.round(pointF2.x);
                int round2 = Math.round(pointF2.y);
                dVar2.f14339d = round2;
                int i17 = dVar2.f14342g + 1;
                dVar2.f14342g = i17;
                if (dVar2.f14341f == i17) {
                    d0.a(dVar2.f14340e, dVar2.a, dVar2.f14337b, dVar2.f14338c, round2);
                    dVar2.f14341f = 0;
                    dVar2.f14342g = 0;
                    break;
                }
                break;
            case 7:
                View view = (View) obj;
                PointF pointF3 = (PointF) obj2;
                d0.a(view, view.getLeft(), view.getTop(), Math.round(pointF3.x), Math.round(pointF3.y));
                break;
            case 8:
                View view2 = (View) obj;
                PointF pointF4 = (PointF) obj2;
                d0.a(view2, Math.round(pointF4.x), Math.round(pointF4.y), view2.getRight(), view2.getBottom());
                break;
            case 9:
                View view3 = (View) obj;
                PointF pointF5 = (PointF) obj2;
                int round3 = Math.round(pointF5.x);
                int round4 = Math.round(pointF5.y);
                d0.a(view3, round3, round4, view3.getWidth() + round3, view3.getHeight() + round4);
                break;
            case 10:
                d0.a.V((View) obj, ((Float) obj2).floatValue());
                break;
            default:
                ((View) obj).setClipBounds((Rect) obj2);
                break;
        }
    }
}
