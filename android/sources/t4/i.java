package t4;

import android.content.res.AssetManager;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PointF;
import android.graphics.RectF;
import android.graphics.Typeface;
import androidx.appcompat.widget.w;
import androidx.recyclerview.widget.h0;
import com.facebook.react.common.assets.ReactFontManager;
import com.facebook.react.views.text.ReactFontManager;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import l4.v;
import l4.z;
import o4.p;
import o4.r;
import s.k;
import s4.n;

/* loaded from: classes.dex */
public final class i extends b {
    public final StringBuilder D;
    public final RectF E;
    public final Matrix F;
    public final m4.a G;
    public final m4.a H;
    public final HashMap I;
    public final k J;
    public final ArrayList K;
    public final o4.f L;
    public final v M;
    public final l4.i N;
    public final int O;
    public final o4.f P;
    public r Q;
    public final o4.f R;
    public r S;
    public final o4.i T;
    public r U;
    public final o4.i V;
    public r W;
    public final o4.f X;
    public r Y;
    public r Z;
    public final o4.f a0;

    /* renamed from: b0, reason: collision with root package name */
    public final o4.f f18217b0;

    /* renamed from: c0, reason: collision with root package name */
    public final o4.f f18218c0;

    public i(v vVar, e eVar) {
        super(vVar, eVar);
        xe.k kVar;
        xe.k kVar2;
        r4.a aVar;
        xe.k kVar3;
        r4.a aVar2;
        xe.k kVar4;
        r4.a aVar3;
        f9.b bVar;
        r4.a aVar4;
        f9.b bVar2;
        r4.b bVar3;
        f9.b bVar4;
        r4.b bVar5;
        f9.b bVar6;
        r4.a aVar5;
        f9.b bVar7;
        r4.a aVar6;
        this.D = new StringBuilder(2);
        this.E = new RectF();
        this.F = new Matrix();
        m4.a aVar7 = new m4.a(1, 1);
        aVar7.setStyle(Paint.Style.FILL);
        this.G = aVar7;
        m4.a aVar8 = new m4.a(1, 2);
        aVar8.setStyle(Paint.Style.STROKE);
        this.H = aVar8;
        this.I = new HashMap();
        this.J = new k();
        this.K = new ArrayList();
        this.O = 2;
        this.M = vVar;
        this.N = eVar.f18194b;
        o4.f fVar = new o4.f((List) eVar.f18207q.f3143e, 2);
        this.L = fVar;
        fVar.a(this);
        f(fVar);
        e4.r rVar = eVar.f18208r;
        if (rVar != null && (bVar7 = (f9.b) rVar.f8000e) != null && (aVar6 = (r4.a) bVar7.f8472d) != null) {
            o4.e l02 = aVar6.l0();
            this.P = (o4.f) l02;
            l02.a(this);
            f(l02);
        }
        if (rVar != null && (bVar6 = (f9.b) rVar.f8000e) != null && (aVar5 = (r4.a) bVar6.f8473e) != null) {
            o4.e l03 = aVar5.l0();
            this.R = (o4.f) l03;
            l03.a(this);
            f(l03);
        }
        if (rVar != null && (bVar4 = (f9.b) rVar.f8000e) != null && (bVar5 = (r4.b) bVar4.f8474i) != null) {
            o4.i l04 = bVar5.l0();
            this.T = l04;
            l04.a(this);
            f(l04);
        }
        if (rVar != null && (bVar2 = (f9.b) rVar.f8000e) != null && (bVar3 = (r4.b) bVar2.f8475v) != null) {
            o4.i l05 = bVar3.l0();
            this.V = l05;
            l05.a(this);
            f(l05);
        }
        if (rVar != null && (bVar = (f9.b) rVar.f8000e) != null && (aVar4 = (r4.a) bVar.f8476w) != null) {
            o4.e l06 = aVar4.l0();
            this.X = (o4.f) l06;
            l06.a(this);
            f(l06);
        }
        if (rVar != null && (kVar4 = (xe.k) rVar.f8001i) != null && (aVar3 = (r4.a) kVar4.f20420b) != null) {
            o4.e l07 = aVar3.l0();
            this.a0 = (o4.f) l07;
            l07.a(this);
            f(l07);
        }
        if (rVar != null && (kVar3 = (xe.k) rVar.f8001i) != null && (aVar2 = (r4.a) kVar3.f20421c) != null) {
            o4.e l08 = aVar2.l0();
            this.f18217b0 = (o4.f) l08;
            l08.a(this);
            f(l08);
        }
        if (rVar != null && (kVar2 = (xe.k) rVar.f8001i) != null && (aVar = (r4.a) kVar2.f20422d) != null) {
            o4.e l09 = aVar.l0();
            this.f18218c0 = (o4.f) l09;
            l09.a(this);
            f(l09);
        }
        if (rVar == null || (kVar = (xe.k) rVar.f8001i) == null) {
            return;
        }
        this.O = kVar.a;
    }

    public static void u(String str, Paint paint, Canvas canvas) {
        if (paint.getColor() == 0) {
            return;
        }
        if (paint.getStyle() == Paint.Style.STROKE && paint.getStrokeWidth() == 0.0f) {
            return;
        }
        canvas.drawText(str, 0, str.length(), 0.0f, 0.0f, paint);
    }

    public static void v(Path path, Paint paint, Canvas canvas) {
        if (paint.getColor() == 0) {
            return;
        }
        if (paint.getStyle() == Paint.Style.STROKE && paint.getStrokeWidth() == 0.0f) {
            return;
        }
        canvas.drawPath(path, paint);
    }

    @Override // t4.b, q4.f
    public final void c(e4.e eVar, Object obj) {
        super.c(eVar, obj);
        PointF pointF = z.a;
        if (obj == 1) {
            r rVar = this.Q;
            if (rVar != null) {
                p(rVar);
            }
            r rVar2 = new r(eVar, null);
            this.Q = rVar2;
            rVar2.a(this);
            f(this.Q);
            return;
        }
        if (obj == 2) {
            r rVar3 = this.S;
            if (rVar3 != null) {
                p(rVar3);
            }
            r rVar4 = new r(eVar, null);
            this.S = rVar4;
            rVar4.a(this);
            f(this.S);
            return;
        }
        if (obj == z.f13822n) {
            r rVar5 = this.U;
            if (rVar5 != null) {
                p(rVar5);
            }
            r rVar6 = new r(eVar, null);
            this.U = rVar6;
            rVar6.a(this);
            f(this.U);
            return;
        }
        if (obj == z.f13823o) {
            r rVar7 = this.W;
            if (rVar7 != null) {
                p(rVar7);
            }
            r rVar8 = new r(eVar, null);
            this.W = rVar8;
            rVar8.a(this);
            f(this.W);
            return;
        }
        if (obj == z.A) {
            r rVar9 = this.Y;
            if (rVar9 != null) {
                p(rVar9);
            }
            r rVar10 = new r(eVar, null);
            this.Y = rVar10;
            rVar10.a(this);
            f(this.Y);
            return;
        }
        if (obj != z.H) {
            if (obj == z.J) {
                o4.f fVar = this.L;
                fVar.getClass();
                fVar.j(new p(new lh.v(), eVar, new q4.b()));
                return;
            }
            return;
        }
        r rVar11 = this.Z;
        if (rVar11 != null) {
            p(rVar11);
        }
        r rVar12 = new r(eVar, null);
        this.Z = rVar12;
        rVar12.a(this);
        f(this.Z);
    }

    @Override // t4.b, n4.e
    public final void e(RectF rectF, Matrix matrix, boolean z5) {
        super.e(rectF, matrix, z5);
        l4.i iVar = this.N;
        rectF.set(0.0f, 0.0f, iVar.k.width(), iVar.k.height());
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:223:0x0373, code lost:
    
        if (r11.equals("Regular") == false) goto L115;
     */
    /* JADX WARN: Code restructure failed: missing block: B:224:0x037f, code lost:
    
        r2 = com.facebook.react.common.assets.ReactFontManager.TypefaceStyle.NORMAL;
     */
    /* JADX WARN: Code restructure failed: missing block: B:226:0x037c, code lost:
    
        if (r11.equals(com.facebook.react.views.progressbar.ReactProgressBarViewManager.DEFAULT_STYLE) == false) goto L115;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:168:0x0445  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00e8  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x04f1  */
    @Override // t4.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void k(Canvas canvas, Matrix matrix, int i5) {
        m4.a aVar;
        String str;
        String str2;
        String str3;
        m4.a aVar2;
        v vVar;
        String str4;
        int i6;
        Typeface typeface;
        Typeface typeface2;
        int i10;
        Typeface typeface3;
        float floatValue;
        int size;
        int i11;
        List list;
        int i12;
        float f2;
        List list2;
        int i13;
        String sb2;
        Canvas canvas2;
        float floatValue2;
        int i14;
        int i15;
        float f10;
        int i16;
        List list3;
        int i17;
        v vVar2;
        List list4;
        m4.a aVar3;
        m4.a aVar4;
        m4.a aVar5;
        m4.a aVar6;
        q4.b bVar = (q4.b) this.L.e();
        l4.i iVar = this.N;
        q4.c cVar = (q4.c) iVar.f13746f.get(bVar.f16663b);
        if (cVar == null) {
            return;
        }
        String fontName = cVar.f16673b;
        String fontStyle = cVar.f16674c;
        String fontFamily = cVar.a;
        canvas.save();
        canvas.concat(matrix);
        t(bVar, i5, 0);
        v vVar3 = this.M;
        Map map = vVar3.G;
        int i18 = 0;
        o4.i iVar2 = this.V;
        m4.a aVar7 = this.G;
        m4.a aVar8 = this.H;
        if (map == null && vVar3.J == null && vVar3.f13787d.f13748h.g() > 0) {
            r rVar = this.Y;
            float floatValue3 = rVar != null ? ((Float) rVar.e()).floatValue() : bVar.f16664c;
            float[] fArr = (float[]) x4.h.f20286d.get();
            fArr[0] = 0.0f;
            fArr[1] = 0.0f;
            float f11 = x4.h.f20287e;
            fArr[2] = f11;
            fArr[3] = f11;
            matrix.mapPoints(fArr);
            v vVar4 = vVar3;
            float f12 = floatValue3 / 100.0f;
            Math.hypot(fArr[2] - fArr[0], fArr[3] - fArr[1]);
            List asList = Arrays.asList(bVar.a.replaceAll("\r\n", "\r").replaceAll("\u0003", "\r").replaceAll(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, "\r").split("\r"));
            int size2 = asList.size();
            float f13 = bVar.f16666e / 10.0f;
            r rVar2 = this.W;
            if (rVar2 != null) {
                floatValue2 = ((Float) rVar2.e()).floatValue();
            } else {
                if (iVar2 != null) {
                    floatValue2 = ((Float) iVar2.e()).floatValue();
                }
                float f14 = f13;
                i14 = 0;
                int i19 = -1;
                while (i14 < size2) {
                    String str5 = (String) asList.get(i14);
                    PointF pointF = bVar.f16672m;
                    float f15 = f12;
                    List z5 = z(str5, pointF == null ? 0.0f : pointF.x, cVar, f15, f14, true);
                    int i20 = i18;
                    while (i20 < z5.size()) {
                        h hVar = (h) z5.get(i20);
                        List list5 = z5;
                        int i21 = i19 + 1;
                        canvas.save();
                        int i22 = i20;
                        if (y(canvas, bVar, i21, hVar.f18216b)) {
                            String str6 = hVar.a;
                            i15 = i21;
                            int i23 = i18;
                            while (i23 < str6.length()) {
                                String str7 = str6;
                                q4.d dVar = (q4.d) iVar.f13748h.c(q4.d.a(str6.charAt(i23), fontFamily, fontStyle));
                                if (dVar == null) {
                                    f10 = f14;
                                    i16 = i23;
                                    list3 = asList;
                                    i17 = size2;
                                    aVar3 = aVar7;
                                    aVar4 = aVar8;
                                    vVar2 = vVar4;
                                } else {
                                    t(bVar, i5, i23);
                                    HashMap hashMap = this.I;
                                    if (hashMap.containsKey(dVar)) {
                                        list4 = (List) hashMap.get(dVar);
                                        f10 = f14;
                                        i16 = i23;
                                        list3 = asList;
                                        i17 = size2;
                                        vVar2 = vVar4;
                                    } else {
                                        f10 = f14;
                                        ArrayList arrayList = dVar.a;
                                        i16 = i23;
                                        int size3 = arrayList.size();
                                        list3 = asList;
                                        ArrayList arrayList2 = new ArrayList(size3);
                                        i17 = size2;
                                        int i24 = i18;
                                        while (i24 < size3) {
                                            arrayList2.add(new n4.d(vVar4, this, (n) arrayList.get(i24), iVar));
                                            size3 = size3;
                                            i24++;
                                            arrayList = arrayList;
                                        }
                                        vVar2 = vVar4;
                                        hashMap.put(dVar, arrayList2);
                                        list4 = arrayList2;
                                    }
                                    int i25 = i18;
                                    while (i25 < list4.size()) {
                                        Path h6 = ((n4.d) list4.get(i25)).h();
                                        List list6 = list4;
                                        h6.computeBounds(this.E, i18);
                                        Matrix matrix2 = this.F;
                                        matrix2.reset();
                                        int i26 = i25;
                                        matrix2.preTranslate(0.0f, (-bVar.f16668g) * x4.h.c());
                                        matrix2.preScale(f15, f15);
                                        h6.transform(matrix2);
                                        if (bVar.k) {
                                            aVar5 = aVar7;
                                            v(h6, aVar5, canvas);
                                            aVar6 = aVar8;
                                            v(h6, aVar6, canvas);
                                        } else {
                                            aVar5 = aVar7;
                                            aVar6 = aVar8;
                                            v(h6, aVar6, canvas);
                                            v(h6, aVar5, canvas);
                                        }
                                        i25 = i26 + 1;
                                        aVar8 = aVar6;
                                        aVar7 = aVar5;
                                        list4 = list6;
                                        i18 = 0;
                                    }
                                    aVar3 = aVar7;
                                    aVar4 = aVar8;
                                    canvas.translate((x4.h.c() * ((float) dVar.f16677c) * f15) + f10, 0.0f);
                                }
                                i23 = i16 + 1;
                                aVar8 = aVar4;
                                aVar7 = aVar3;
                                vVar4 = vVar2;
                                str6 = str7;
                                f14 = f10;
                                asList = list3;
                                size2 = i17;
                                i18 = 0;
                            }
                        } else {
                            i15 = i21;
                        }
                        float f16 = f14;
                        List list7 = asList;
                        int i27 = size2;
                        m4.a aVar9 = aVar7;
                        m4.a aVar10 = aVar8;
                        v vVar5 = vVar4;
                        canvas.restore();
                        aVar8 = aVar10;
                        aVar7 = aVar9;
                        vVar4 = vVar5;
                        i19 = i15;
                        f14 = f16;
                        asList = list7;
                        size2 = i27;
                        i18 = 0;
                        i20 = i22 + 1;
                        z5 = list5;
                    }
                    i14++;
                    asList = asList;
                    size2 = size2;
                    i18 = 0;
                    f12 = f15;
                }
                canvas2 = canvas;
            }
            f13 += floatValue2;
            float f142 = f13;
            i14 = 0;
            int i192 = -1;
            while (i14 < size2) {
            }
            canvas2 = canvas;
        } else {
            r rVar3 = this.Z;
            if (rVar3 == null || (typeface = (Typeface) rVar3.e()) == null) {
                Map map2 = vVar3.G;
                if (map2 != null) {
                    if (map2.containsKey(fontFamily)) {
                        typeface3 = (Typeface) map2.get(fontFamily);
                    } else if (map2.containsKey(fontName)) {
                        typeface3 = (Typeface) map2.get(fontName);
                    } else {
                        String l6 = k0.d.l(fontFamily, "-", fontStyle);
                        if (map2.containsKey(l6)) {
                            typeface3 = (Typeface) map2.get(l6);
                        }
                    }
                    typeface = typeface3;
                    aVar = aVar8;
                    str = ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE;
                    str2 = "\u0003";
                    str3 = "\r";
                    aVar2 = aVar7;
                    vVar = vVar3;
                    str4 = "\r\n";
                    i6 = -1;
                    if (typeface == null) {
                        typeface = cVar.f16675d;
                    }
                }
                w i28 = vVar3.i();
                if (i28 != null) {
                    e4.r rVar4 = (e4.r) i28.f1141d;
                    rVar4.f8000e = fontFamily;
                    rVar4.f8001i = fontStyle;
                    HashMap hashMap2 = (HashMap) i28.f1142e;
                    Typeface typeface4 = (Typeface) hashMap2.get(rVar4);
                    if (typeface4 != null) {
                        aVar = aVar8;
                        str2 = "\u0003";
                        str3 = "\r";
                        aVar2 = aVar7;
                        vVar = vVar3;
                        str4 = "\r\n";
                        typeface = typeface4;
                        i6 = -1;
                        str = ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE;
                    } else {
                        str = ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE;
                        HashMap hashMap3 = (HashMap) i28.f1143i;
                        Typeface typeface5 = (Typeface) hashMap3.get(fontFamily);
                        str2 = "\u0003";
                        if (typeface5 != null) {
                            aVar = aVar8;
                            aVar2 = aVar7;
                            vVar = vVar3;
                            str4 = "\r\n";
                            typeface2 = typeface5;
                            i6 = -1;
                            str3 = "\r";
                        } else {
                            str3 = "\r";
                            l4.b bVar2 = (l4.b) i28.f1145w;
                            if (bVar2 != null) {
                                k4.h hVar2 = (k4.h) bVar2;
                                str4 = "\r\n";
                                Intrinsics.checkNotNullParameter(fontFamily, "fontFamily");
                                aVar = aVar8;
                                Intrinsics.checkNotNullParameter(fontStyle, "fontStyle");
                                Intrinsics.checkNotNullParameter(fontName, "fontName");
                                switch (fontStyle.hashCode()) {
                                    case -1994163307:
                                        if (fontStyle.equals("Medium")) {
                                            i10 = 500;
                                            break;
                                        }
                                        i10 = -1;
                                        break;
                                    case -1955878649:
                                        break;
                                    case -1543850116:
                                        break;
                                    case 2076325:
                                        if (fontStyle.equals("Bold")) {
                                            i10 = ReactFontManager.TypefaceStyle.BOLD;
                                            break;
                                        }
                                        i10 = -1;
                                        break;
                                    case 2605753:
                                        if (fontStyle.equals("Thin")) {
                                            i10 = 100;
                                            break;
                                        }
                                        i10 = -1;
                                        break;
                                    case 64266207:
                                        if (fontStyle.equals("Black")) {
                                            i10 = 900;
                                            break;
                                        }
                                        i10 = -1;
                                        break;
                                    case 73417974:
                                        if (fontStyle.equals("Light")) {
                                            i10 = h0.DEFAULT_DRAG_ANIMATION_DURATION;
                                            break;
                                        }
                                        i10 = -1;
                                        break;
                                    default:
                                        i10 = -1;
                                        break;
                                }
                                ReactFontManager.Companion companion = com.facebook.react.views.text.ReactFontManager.INSTANCE;
                                aVar2 = aVar7;
                                com.facebook.react.views.text.ReactFontManager companion2 = companion.getInstance();
                                AssetManager assets = hVar2.a.getContext().getAssets();
                                Intrinsics.checkNotNullExpressionValue(assets, "getAssets(...)");
                                vVar = vVar3;
                                Typeface typeface6 = companion2.getTypeface(fontName, -1, i10, assets);
                                if (typeface6 == null) {
                                    k4.h hVar3 = (k4.h) ((l4.b) i28.f1145w);
                                    hVar3.getClass();
                                    Intrinsics.checkNotNullParameter(fontFamily, "fontFamily");
                                    com.facebook.react.views.text.ReactFontManager companion3 = companion.getInstance();
                                    AssetManager assets2 = hVar3.a.getContext().getAssets();
                                    Intrinsics.checkNotNullExpressionValue(assets2, "getAssets(...)");
                                    i6 = -1;
                                    typeface2 = companion3.getTypeface(fontFamily, -1, -1, assets2);
                                } else {
                                    i6 = -1;
                                    typeface2 = typeface6;
                                }
                            } else {
                                aVar = aVar8;
                                aVar2 = aVar7;
                                vVar = vVar3;
                                str4 = "\r\n";
                                i6 = -1;
                                typeface2 = null;
                            }
                            Typeface typeface7 = cVar.f16675d;
                            if (typeface7 != null) {
                                typeface2 = typeface7;
                            } else {
                                if (typeface2 == null) {
                                    typeface2 = Typeface.createFromAsset((AssetManager) i28.f1144v, "fonts/" + fontFamily + ((String) i28.f1146x));
                                }
                                hashMap3.put(fontFamily, typeface2);
                            }
                        }
                        boolean contains = fontStyle.contains("Italic");
                        boolean contains2 = fontStyle.contains("Bold");
                        int i29 = (contains && contains2) ? 3 : contains ? 2 : contains2 ? 1 : 0;
                        if (typeface2.getStyle() != i29) {
                            typeface2 = Typeface.create(typeface2, i29);
                        }
                        hashMap2.put(rVar4, typeface2);
                        typeface = typeface2;
                    }
                } else {
                    aVar = aVar8;
                    str = ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE;
                    str2 = "\u0003";
                    str3 = "\r";
                    aVar2 = aVar7;
                    vVar = vVar3;
                    str4 = "\r\n";
                    i6 = -1;
                    typeface = null;
                }
                if (typeface == null) {
                }
            } else {
                aVar = aVar8;
                str = ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE;
                str2 = "\u0003";
                str3 = "\r";
                aVar2 = aVar7;
                vVar = vVar3;
                str4 = "\r\n";
                i6 = -1;
            }
            if (typeface != null) {
                String str8 = bVar.a;
                l4.h0 h0Var = vVar.J;
                i iVar3 = this;
                if (h0Var != null) {
                    String str9 = iVar3.f18183p.f18195c;
                    HashMap hashMap4 = h0Var.a;
                    boolean z6 = h0Var.f13741c;
                    if (z6 && hashMap4.containsKey(str8)) {
                        str8 = (String) hashMap4.get(str8);
                    } else if (z6) {
                        hashMap4.put(str8, str8);
                    }
                }
                m4.a aVar11 = aVar2;
                aVar11.setTypeface(typeface);
                r rVar5 = iVar3.Y;
                float floatValue4 = rVar5 != null ? ((Float) rVar5.e()).floatValue() : bVar.f16664c;
                aVar11.setTextSize(x4.h.c() * floatValue4);
                m4.a aVar12 = aVar;
                aVar12.setTypeface(aVar11.getTypeface());
                aVar12.setTextSize(aVar11.getTextSize());
                float f17 = bVar.f16666e / 10.0f;
                r rVar6 = iVar3.W;
                if (rVar6 != null) {
                    floatValue = ((Float) rVar6.e()).floatValue();
                } else {
                    if (iVar2 != null) {
                        floatValue = ((Float) iVar2.e()).floatValue();
                    }
                    float c6 = ((x4.h.c() * f17) * floatValue4) / 100.0f;
                    String str10 = str3;
                    List asList2 = Arrays.asList(str8.replaceAll(str4, str10).replaceAll(str2, str10).replaceAll(str, str10).split(str10));
                    size = asList2.size();
                    i11 = 0;
                    int i30 = 0;
                    while (i11 < size) {
                        String str11 = (String) asList2.get(i11);
                        PointF pointF2 = bVar.f16672m;
                        m4.a aVar13 = aVar12;
                        float f18 = c6;
                        i iVar4 = iVar3;
                        List z7 = iVar4.z(str11, pointF2 == null ? 0.0f : pointF2.x, cVar, 0.0f, f18, false);
                        int i31 = 0;
                        while (i31 < z7.size()) {
                            h hVar4 = (h) z7.get(i31);
                            i6++;
                            canvas.save();
                            if (iVar4.y(canvas, bVar, i6, hVar4.f18216b)) {
                                String str12 = hVar4.a;
                                list = z7;
                                i12 = i31;
                                int i32 = 0;
                                while (i32 < str12.length()) {
                                    int codePointAt = str12.codePointAt(i32);
                                    int i33 = i32;
                                    int charCount = Character.charCount(codePointAt) + i32;
                                    q4.c cVar2 = cVar;
                                    while (true) {
                                        if (charCount < str12.length()) {
                                            int codePointAt2 = str12.codePointAt(charCount);
                                            f2 = f18;
                                            if (Character.getType(codePointAt2) == 16 || Character.getType(codePointAt2) == 27 || Character.getType(codePointAt2) == 6 || Character.getType(codePointAt2) == 28 || Character.getType(codePointAt2) == 8 || Character.getType(codePointAt2) == 19) {
                                                charCount += Character.charCount(codePointAt2);
                                                codePointAt = (codePointAt * 31) + codePointAt2;
                                                f18 = f2;
                                            }
                                        } else {
                                            f2 = f18;
                                        }
                                    }
                                    long j = codePointAt;
                                    k kVar = iVar4.J;
                                    if (kVar.c(j) >= 0) {
                                        sb2 = (String) kVar.b(j);
                                        list2 = asList2;
                                        i13 = size;
                                    } else {
                                        list2 = asList2;
                                        StringBuilder sb3 = iVar4.D;
                                        i13 = size;
                                        sb3.setLength(0);
                                        int i34 = i33;
                                        while (i34 < charCount) {
                                            int i35 = charCount;
                                            int codePointAt3 = str12.codePointAt(i34);
                                            sb3.appendCodePoint(codePointAt3);
                                            i34 += Character.charCount(codePointAt3);
                                            charCount = i35;
                                        }
                                        sb2 = sb3.toString();
                                        kVar.e(j, sb2);
                                    }
                                    iVar4.t(bVar, i5, i30 + i33);
                                    if (bVar.k) {
                                        u(sb2, aVar11, canvas);
                                        u(sb2, aVar13, canvas);
                                    } else {
                                        u(sb2, aVar13, canvas);
                                        u(sb2, aVar11, canvas);
                                    }
                                    canvas.translate(aVar11.measureText(sb2) + f2, 0.0f);
                                    i32 = sb2.length() + i33;
                                    cVar = cVar2;
                                    asList2 = list2;
                                    f18 = f2;
                                    size = i13;
                                }
                            } else {
                                list = z7;
                                i12 = i31;
                            }
                            q4.c cVar3 = cVar;
                            float f19 = f18;
                            List list8 = asList2;
                            int i36 = size;
                            i30 += hVar4.a.length();
                            canvas.restore();
                            i31 = i12 + 1;
                            z7 = list;
                            cVar = cVar3;
                            asList2 = list8;
                            f18 = f19;
                            size = i36;
                        }
                        float f20 = f18;
                        i11++;
                        iVar3 = iVar4;
                        aVar12 = aVar13;
                        c6 = f20;
                        size = size;
                    }
                }
                f17 += floatValue;
                float c62 = ((x4.h.c() * f17) * floatValue4) / 100.0f;
                String str102 = str3;
                List asList22 = Arrays.asList(str8.replaceAll(str4, str102).replaceAll(str2, str102).replaceAll(str, str102).split(str102));
                size = asList22.size();
                i11 = 0;
                int i302 = 0;
                while (i11 < size) {
                }
            }
            canvas2 = canvas;
        }
        canvas2.restore();
    }

    public final void t(q4.b bVar, int i5, int i6) {
        r rVar = this.Q;
        m4.a aVar = this.G;
        if (rVar != null) {
            aVar.setColor(((Integer) rVar.e()).intValue());
        } else {
            o4.f fVar = this.P;
            if (fVar == null || !x(i6)) {
                aVar.setColor(bVar.f16669h);
            } else {
                aVar.setColor(((Integer) fVar.e()).intValue());
            }
        }
        r rVar2 = this.S;
        m4.a aVar2 = this.H;
        if (rVar2 != null) {
            aVar2.setColor(((Integer) rVar2.e()).intValue());
        } else {
            o4.f fVar2 = this.R;
            if (fVar2 == null || !x(i6)) {
                aVar2.setColor(bVar.f16670i);
            } else {
                aVar2.setColor(((Integer) fVar2.e()).intValue());
            }
        }
        o4.e eVar = this.f18190w.j;
        int i10 = 100;
        int intValue = eVar == null ? 100 : ((Integer) eVar.e()).intValue();
        o4.f fVar3 = this.X;
        if (fVar3 != null && x(i6)) {
            i10 = ((Integer) fVar3.e()).intValue();
        }
        int round = Math.round((((i10 / 100.0f) * ((intValue * 255.0f) / 100.0f)) * i5) / 255.0f);
        aVar.setAlpha(round);
        aVar2.setAlpha(round);
        r rVar3 = this.U;
        if (rVar3 != null) {
            aVar2.setStrokeWidth(((Float) rVar3.e()).floatValue());
            return;
        }
        o4.i iVar = this.T;
        if (iVar == null || !x(i6)) {
            aVar2.setStrokeWidth(x4.h.c() * bVar.j);
        } else {
            aVar2.setStrokeWidth(((Float) iVar.e()).floatValue());
        }
    }

    public final h w(int i5) {
        ArrayList arrayList = this.K;
        for (int size = arrayList.size(); size < i5; size++) {
            h hVar = new h();
            hVar.a = "";
            hVar.f18216b = 0.0f;
            arrayList.add(hVar);
        }
        return (h) arrayList.get(i5 - 1);
    }

    public final boolean x(int i5) {
        o4.f fVar;
        int length = ((q4.b) this.L.e()).a.length();
        o4.f fVar2 = this.a0;
        if (fVar2 == null || (fVar = this.f18217b0) == null) {
            return true;
        }
        int min = Math.min(((Integer) fVar2.e()).intValue(), ((Integer) fVar.e()).intValue());
        int max = Math.max(((Integer) fVar2.e()).intValue(), ((Integer) fVar.e()).intValue());
        o4.f fVar3 = this.f18218c0;
        if (fVar3 != null) {
            int intValue = ((Integer) fVar3.e()).intValue();
            min += intValue;
            max += intValue;
        }
        if (this.O == 2) {
            return i5 >= min && i5 < max;
        }
        float f2 = (i5 / length) * 100.0f;
        return f2 >= ((float) min) && f2 < ((float) max);
    }

    public final boolean y(Canvas canvas, q4.b bVar, int i5, float f2) {
        PointF pointF = bVar.f16671l;
        PointF pointF2 = bVar.f16672m;
        float c6 = x4.h.c();
        float f10 = (i5 * bVar.f16667f * c6) + (pointF == null ? 0.0f : (bVar.f16667f * c6) + pointF.y);
        if (this.M.S && pointF2 != null && pointF != null && f10 >= pointF.y + pointF2.y + bVar.f16664c) {
            return false;
        }
        float f11 = pointF == null ? 0.0f : pointF.x;
        float f12 = pointF2 != null ? pointF2.x : 0.0f;
        int b10 = f0.e.b(bVar.f16665d);
        if (b10 == 0) {
            canvas.translate(f11, f10);
            return true;
        }
        if (b10 == 1) {
            canvas.translate((f11 + f12) - f2, f10);
            return true;
        }
        if (b10 != 2) {
            return true;
        }
        canvas.translate(((f12 / 2.0f) + f11) - (f2 / 2.0f), f10);
        return true;
    }

    public final List z(String str, float f2, q4.c cVar, float f10, float f11, boolean z5) {
        float measureText;
        int i5 = 0;
        int i6 = 0;
        boolean z6 = false;
        int i10 = 0;
        float f12 = 0.0f;
        float f13 = 0.0f;
        float f14 = 0.0f;
        for (int i11 = 0; i11 < str.length(); i11++) {
            char charAt = str.charAt(i11);
            if (z5) {
                q4.d dVar = (q4.d) this.N.f13748h.c(q4.d.a(charAt, cVar.a, cVar.f16674c));
                if (dVar != null) {
                    measureText = (x4.h.c() * ((float) dVar.f16677c) * f10) + f11;
                }
            } else {
                measureText = this.G.measureText(str.substring(i11, i11 + 1)) + f11;
            }
            if (charAt == ' ') {
                z6 = true;
                f14 = measureText;
            } else if (z6) {
                z6 = false;
                i10 = i11;
                f13 = measureText;
            } else {
                f13 += measureText;
            }
            f12 += measureText;
            if (f2 > 0.0f && f12 >= f2 && charAt != ' ') {
                i5++;
                h w5 = w(i5);
                if (i10 == i6) {
                    w5.a = str.substring(i6, i11).trim();
                    w5.f18216b = (f12 - measureText) - ((r10.length() - r8.length()) * f14);
                    i6 = i11;
                    i10 = i6;
                    f12 = measureText;
                    f13 = f12;
                } else {
                    w5.a = str.substring(i6, i10 - 1).trim();
                    w5.f18216b = ((f12 - f13) - ((r8.length() - r14.length()) * f14)) - f14;
                    f12 = f13;
                    i6 = i10;
                }
            }
        }
        if (f12 > 0.0f) {
            i5++;
            h w6 = w(i5);
            w6.a = str.substring(i6);
            w6.f18216b = f12;
        }
        return this.K.subList(0, i5);
    }
}
