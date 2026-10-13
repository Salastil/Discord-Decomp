package com.horcrux.svg;

import android.content.res.AssetManager;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PathMeasure;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Region;
import android.graphics.Typeface;
import android.os.Build;
import android.text.Layout;
import android.text.SpannableString;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.view.View;
import android.view.ViewParent;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.views.text.ReactFontManager;
import java.text.Bidi;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class a2 extends f2 {
    public Path N;
    public String O;
    public b2 P;
    public final ArrayList Q;
    public final ArrayList R;
    public final AssetManager S;

    public a2(ThemedReactContext themedReactContext) {
        super(themedReactContext);
        this.Q = new ArrayList();
        this.R = new ArrayList();
        this.S = this.mContext.getResources().getAssets();
    }

    @Override // com.horcrux.svg.f2, com.horcrux.svg.VirtualView
    public final void clearCache() {
        this.N = null;
        super.clearCache();
    }

    @Override // com.horcrux.svg.f2, com.horcrux.svg.a0, com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final void draw(Canvas canvas, Paint paint, float f2) {
        if (this.O == null) {
            clip(canvas, paint);
            c(canvas, paint, f2);
            return;
        }
        r0 r0Var = this.f6349x;
        if (r0Var != null && r0Var.a != 0.0d) {
            if (setupFillPaint(paint, this.fillOpacity * f2)) {
                o(canvas, paint);
            }
            if (setupStrokePaint(paint, f2 * this.strokeOpacity)) {
                o(canvas, paint);
                return;
            }
            return;
        }
        ArrayList arrayList = this.Q;
        int size = arrayList.size();
        if (size > 0) {
            n(paint, f().f6472r);
            for (int i5 = 0; i5 < size; i5++) {
                String str = (String) arrayList.get(i5);
                Matrix matrix = (Matrix) this.R.get(i5);
                canvas.save();
                canvas.concat(matrix);
                canvas.drawText(str, 0.0f, 0.0f, paint);
                canvas.restore();
            }
        }
        d(canvas, paint, f2);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:105:0x02be  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x02dd  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x0308  */
    /* JADX WARN: Removed duplicated region for block: B:129:0x034b  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x0364  */
    /* JADX WARN: Removed duplicated region for block: B:140:0x0393  */
    /* JADX WARN: Removed duplicated region for block: B:143:0x0434  */
    /* JADX WARN: Removed duplicated region for block: B:230:0x03a3  */
    /* JADX WARN: Removed duplicated region for block: B:240:0x03df  */
    /* JADX WARN: Removed duplicated region for block: B:252:0x0367  */
    /* JADX WARN: Removed duplicated region for block: B:255:0x0373  */
    /* JADX WARN: Removed duplicated region for block: B:258:0x037f  */
    /* JADX WARN: Removed duplicated region for block: B:272:0x0346  */
    /* JADX WARN: Removed duplicated region for block: B:279:0x0300  */
    /* JADX WARN: Removed duplicated region for block: B:289:0x0290  */
    /* JADX WARN: Removed duplicated region for block: B:294:0x0240  */
    /* JADX WARN: Removed duplicated region for block: B:297:0x01e7  */
    /* JADX WARN: Removed duplicated region for block: B:298:0x01ca A[EDGE_INSN: B:298:0x01ca->B:299:0x01ca BREAK  A[LOOP:4: B:68:0x01a2->B:75:0x01bc], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:302:0x0158  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0144  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x016f  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x01b5  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x01dc  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x01f1  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x0254  */
    /* JADX WARN: Type inference failed for: r25v10 */
    /* JADX WARN: Type inference failed for: r25v11 */
    /* JADX WARN: Type inference failed for: r25v12 */
    /* JADX WARN: Type inference failed for: r25v13 */
    /* JADX WARN: Type inference failed for: r25v14 */
    @Override // com.horcrux.svg.f2, com.horcrux.svg.a0, com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Path getPath(Canvas canvas, Paint paint) {
        PathMeasure pathMeasure;
        boolean z5;
        double d6;
        boolean z6;
        boolean z7;
        int i5;
        double d7;
        ArrayList arrayList;
        int size;
        f2 f2Var;
        int b10;
        double d8;
        ArrayList arrayList2;
        double d10;
        double d11;
        double d12;
        double d13;
        double d14;
        double d15;
        int i6;
        boolean z8;
        r0 r0Var;
        boolean z10;
        String str;
        double d16;
        c2 c2Var;
        boolean z11;
        double d17;
        double d18;
        double d19;
        int i10;
        Path path;
        boolean z12;
        float f2;
        int i11;
        double d20;
        boolean z13;
        double d21;
        char c6;
        Matrix matrix;
        float[] fArr;
        z zVar;
        float[] fArr2;
        PathMeasure pathMeasure2;
        ArrayList arrayList3;
        ArrayList arrayList4;
        Path path2;
        double d22;
        int i12;
        String str2;
        Path path3;
        Path path4;
        int i13;
        int ordinal;
        ?? r25;
        double d23;
        a2 a2Var = this;
        Paint paint2 = paint;
        Path path5 = a2Var.N;
        if (path5 != null) {
            return path5;
        }
        if (a2Var.O == null) {
            Path j = j(canvas, paint);
            a2Var.N = j;
            return j;
        }
        ViewParent parent = a2Var.getParent();
        while (true) {
            if (parent == null) {
                break;
            }
            if (parent.getClass() == b2.class) {
                a2Var.P = (b2) parent;
                break;
            }
            if (!(parent instanceof f2)) {
                break;
            }
            parent = parent.getParent();
        }
        a2Var.h();
        String str3 = a2Var.O;
        if (str3 != null && str3.length() != 0) {
            Bidi bidi = new Bidi(str3, -2);
            if (!bidi.isLeftToRight()) {
                int runCount = bidi.getRunCount();
                byte[] bArr = new byte[runCount];
                Integer[] numArr = new Integer[runCount];
                for (int i14 = 0; i14 < runCount; i14++) {
                    bArr[i14] = (byte) bidi.getRunLevel(i14);
                    numArr[i14] = Integer.valueOf(i14);
                }
                Bidi.reorderVisually(bArr, 0, numArr, 0, runCount);
                StringBuilder sb2 = new StringBuilder();
                for (int i15 = 0; i15 < runCount; i15++) {
                    int intValue = numArr[i15].intValue();
                    int runStart = bidi.getRunStart(intValue);
                    int runLimit = bidi.getRunLimit(intValue);
                    if ((bArr[intValue] & 1) != 0) {
                        while (true) {
                            runLimit--;
                            if (runLimit >= runStart) {
                                sb2.append(str3.charAt(runLimit));
                            }
                        }
                    } else {
                        sb2.append((CharSequence) str3, runStart, runLimit);
                    }
                }
                str3 = sb2.toString();
            }
        }
        int length = str3.length();
        Path path6 = new Path();
        ArrayList arrayList5 = a2Var.Q;
        arrayList5.clear();
        ArrayList arrayList6 = a2Var.R;
        arrayList6.clear();
        if (length != 0) {
            boolean z14 = a2Var.P != null;
            if (z14) {
                b2 b2Var = a2Var.P;
                VirtualView definedTemplate = b2Var.getSvgView().getDefinedTemplate(b2Var.N);
                pathMeasure = new PathMeasure(definedTemplate instanceof RenderableView ? ((RenderableView) definedTemplate).getPath(canvas, paint2) : null, false);
                double length2 = pathMeasure.getLength();
                z5 = pathMeasure.isClosed();
                d6 = length2 != 0.0d ? length2 : 0.0d;
            } else {
                pathMeasure = null;
                z5 = false;
            }
            z f10 = a2Var.f();
            x xVar = f10.f6472r;
            float f11 = f10.M;
            a2Var.n(paint2, xVar);
            String str4 = xVar.f6443g;
            ArrayList arrayList7 = new ArrayList();
            boolean z15 = z14;
            Path path7 = path6;
            int[][] iArr = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER][];
            arrayList7.add(new Path());
            boolean[] zArr = new boolean[length];
            char[] charArray = str3.toCharArray();
            ArrayList arrayList8 = arrayList6;
            double d24 = xVar.f6446l;
            double d25 = xVar.f6447m;
            double d26 = xVar.f6448n;
            boolean z16 = xVar.f6449o;
            boolean z17 = z5;
            if (d26 == 0.0d) {
                z6 = z16;
                if (xVar.f6445i == 1) {
                    z7 = true;
                    i5 = Build.VERSION.SDK_INT;
                    if (z7) {
                        d7 = d26;
                        paint2.setFontFeatureSettings("'rlig', 'liga', 'clig', 'calt', 'locl', 'ccmp', 'mark', 'mkmk','kern', 'liga' 0, 'clig' 0, 'dlig' 0, 'hlig' 0, 'cala' 0, " + str4);
                    } else {
                        d7 = d26;
                        paint2.setFontFeatureSettings("'rlig', 'liga', 'clig', 'calt', 'locl', 'ccmp', 'mark', 'mkmk','kern', 'hlig', 'cala', " + str4);
                    }
                    if (i5 >= 26) {
                        paint2.setFontVariationSettings("'wght' " + xVar.f6442f + xVar.f6444h);
                    }
                    ReadableMap readableMap = xVar.f6440d;
                    float[] fArr3 = new float[length];
                    paint2.getTextWidths(str3, fArr3);
                    int i16 = xVar.j;
                    arrayList = a2Var.f().a;
                    ViewParent parent2 = a2Var.getParent();
                    size = arrayList.size() - 1;
                    f2 f2Var2 = a2Var;
                    while (size >= 0 && (parent2 instanceof f2)) {
                        ArrayList arrayList9 = arrayList;
                        if (((x) arrayList.get(size)).j != 1) {
                            break;
                        }
                        f2Var = f2Var2;
                        if (f2Var.H != null) {
                            break;
                        }
                        f2Var2 = (f2) parent2;
                        parent2 = f2Var2.getParent();
                        size--;
                        arrayList = arrayList9;
                    }
                    f2Var = f2Var2;
                    double k = f2Var.k(paint2);
                    b10 = f0.e.b(i16);
                    if (b10 != 1) {
                        d8 = (-k) / 2.0d;
                    } else {
                        if (b10 != 2) {
                            arrayList2 = arrayList5;
                            d8 = 0.0d;
                            double d27 = f10.f6471q;
                            double d28 = d8;
                            if (z15) {
                                b2 b2Var2 = a2Var.P;
                                boolean z18 = b2Var2.P == 1;
                                int i17 = b2Var2.O == 2 ? -1 : 1;
                                boolean z19 = z18;
                                double r5 = e4.f.r(b2Var2.Q, d6, a2Var.mScale, d27);
                                int i18 = i17;
                                d12 = d6;
                                d10 = d27;
                                d15 = d28 + r5;
                                if (z17) {
                                    d11 = k;
                                    double d29 = r5 + (i16 == 2 ? -(d12 / 2.0d) : 0.0d);
                                    d13 = d29 + d12;
                                    i6 = i18;
                                    d14 = d29;
                                } else {
                                    d11 = k;
                                    d13 = d12;
                                    d14 = 0.0d;
                                    i6 = i18;
                                }
                                z8 = z19;
                            } else {
                                d10 = d27;
                                d11 = k;
                                d12 = d6;
                                d13 = d12;
                                d14 = 0.0d;
                                d15 = d28;
                                i6 = 1;
                                z8 = false;
                            }
                            r0Var = a2Var.f6350y;
                            double d30 = 1.0d;
                            if (r0Var != null) {
                                z10 = z8;
                                double r7 = e4.f.r(r0Var, canvas.getWidth(), a2Var.mScale, d10);
                                if (r7 < 0.0d) {
                                    throw new IllegalArgumentException("Negative textLength value");
                                }
                                if (f0.e.b(a2Var.F) != 1) {
                                    d7 = ((r7 - d11) / (length - 1)) + d7;
                                } else {
                                    d30 = r7 / d11;
                                }
                            } else {
                                z10 = z8;
                            }
                            double d31 = i6;
                            double d32 = d14;
                            double d33 = d30 * d31;
                            Paint.FontMetrics fontMetrics = paint2.getFontMetrics();
                            ArrayList arrayList10 = arrayList7;
                            double d34 = fontMetrics.descent;
                            float f12 = fontMetrics.leading;
                            double d35 = d33;
                            double d36 = f12 + d34;
                            double d37 = (-fontMetrics.ascent) + f12;
                            double d38 = -fontMetrics.top;
                            double d39 = d38 + d36;
                            if (a2Var.E == null) {
                                for (ViewParent parent3 = a2Var.getParent(); parent3 != null; parent3 = parent3.getParent()) {
                                    if ((parent3 instanceof f2) && (str = ((f2) parent3).E) != null) {
                                        a2Var.E = str;
                                        break;
                                    }
                                }
                            }
                            str = a2Var.E;
                            if (a2Var.G == null) {
                                ViewParent parent4 = a2Var.getParent();
                                while (parent4 != null) {
                                    d16 = d38;
                                    if ((parent4 instanceof f2) && (c2Var = ((f2) parent4).G) != null) {
                                        a2Var.G = c2Var;
                                        break;
                                    }
                                    parent4 = parent4.getParent();
                                    d38 = d16;
                                }
                            }
                            d16 = d38;
                            if (a2Var.G == null) {
                                a2Var.G = c2.baseline;
                            }
                            c2Var = a2Var.G;
                            if (c2Var != null) {
                                switch (c2Var.ordinal()) {
                                    case 1:
                                    case 3:
                                    case 12:
                                    case 14:
                                        z11 = false;
                                        d17 = -d34;
                                        break;
                                    case 2:
                                    default:
                                        d17 = 0.0d;
                                        z11 = false;
                                        break;
                                    case 4:
                                        z11 = false;
                                        paint2.getTextBounds("x", 0, 1, new Rect());
                                        d17 = r1.height() / 2.0d;
                                        break;
                                    case 5:
                                        d17 = (d37 - d34) / 2.0d;
                                        z11 = false;
                                        break;
                                    case 6:
                                        d23 = 0.5d;
                                        d17 = d23 * d37;
                                        z11 = false;
                                        break;
                                    case 7:
                                    case 11:
                                    case 13:
                                        d17 = d37;
                                        z11 = false;
                                        break;
                                    case 8:
                                        d17 = d36;
                                        z11 = false;
                                        break;
                                    case 9:
                                        d17 = d39 / 2.0d;
                                        z11 = false;
                                        break;
                                    case 10:
                                        d17 = d16;
                                        z11 = false;
                                        break;
                                    case 15:
                                        d23 = 0.8d;
                                        d17 = d23 * d37;
                                        z11 = false;
                                        break;
                                }
                            } else {
                                z11 = false;
                                d17 = 0.0d;
                            }
                            if (str != null && !str.isEmpty() && (ordinal = c2Var.ordinal()) != 8 && ordinal != 10) {
                                switch (str.hashCode()) {
                                    case -1720785339:
                                        if (str.equals("baseline")) {
                                            r25 = z11;
                                            break;
                                        }
                                        r25 = -1;
                                        break;
                                    case 114240:
                                        if (str.equals("sub")) {
                                            r25 = 1;
                                            break;
                                        }
                                        r25 = -1;
                                        break;
                                    case 109801339:
                                        if (str.equals("super")) {
                                            r25 = 2;
                                            break;
                                        }
                                        r25 = -1;
                                        break;
                                    default:
                                        r25 = -1;
                                        break;
                                }
                                switch (r25) {
                                    case 0:
                                        break;
                                    case 1:
                                        d18 = d17;
                                        if (readableMap != null && readableMap.hasKey("tables") && readableMap.hasKey("unitsPerEm")) {
                                            int i19 = readableMap.getInt("unitsPerEm");
                                            ReadableMap map = readableMap.getMap("tables");
                                            if (map.hasKey("os2")) {
                                                ReadableMap map2 = map.getMap("os2");
                                                if (map2.hasKey("ySubscriptYOffset")) {
                                                    d19 = (((a2Var.mScale * d10) * map2.getDouble("ySubscriptYOffset")) / i19) + d18;
                                                    break;
                                                }
                                            }
                                        }
                                        d19 = d18;
                                        break;
                                    case 2:
                                        if (readableMap != null && readableMap.hasKey("tables") && readableMap.hasKey("unitsPerEm")) {
                                            int i20 = readableMap.getInt("unitsPerEm");
                                            ReadableMap map3 = readableMap.getMap("tables");
                                            if (map3.hasKey("os2")) {
                                                ReadableMap map4 = map3.getMap("os2");
                                                if (map4.hasKey("ySuperscriptYOffset")) {
                                                    d19 = d17 - (((a2Var.mScale * d10) * map4.getDouble("ySuperscriptYOffset")) / i20);
                                                    break;
                                                }
                                            }
                                        }
                                        break;
                                    default:
                                        double d40 = a2Var.mScale;
                                        d19 = d17 - e4.f.q(d40 * d10, str, d40, d10);
                                        break;
                                }
                                Matrix matrix2 = new Matrix();
                                Matrix matrix3 = new Matrix();
                                Matrix matrix4 = new Matrix();
                                float[] fArr4 = new float[9];
                                float[] fArr5 = new float[9];
                                double d41 = d19;
                                i10 = 0;
                                while (i10 < length) {
                                    char c8 = charArray[i10];
                                    String valueOf = String.valueOf(c8);
                                    boolean z20 = zArr[i10];
                                    int i21 = i10;
                                    if (z20) {
                                        valueOf = "";
                                        i11 = length;
                                        z12 = false;
                                        f2 = 0.0f;
                                    } else {
                                        int i22 = i21;
                                        z12 = false;
                                        f2 = 0.0f;
                                        while (true) {
                                            int i23 = i22 + 1;
                                            if (i23 < length && fArr3[i23] <= 0.0f) {
                                                StringBuilder o6 = k0.d.o(valueOf);
                                                o6.append(charArray[i23]);
                                                valueOf = o6.toString();
                                                zArr[i23] = true;
                                                i22 = i23;
                                                length = length;
                                                z12 = true;
                                            }
                                        }
                                        i11 = length;
                                    }
                                    String str5 = valueOf;
                                    int i24 = i6;
                                    double measureText = paint2.measureText(str5) * d30;
                                    if (z6) {
                                        d20 = measureText;
                                    } else {
                                        d20 = measureText;
                                        d24 = (fArr3[i21] * d30) - d20;
                                    }
                                    boolean z21 = c8 == ' ';
                                    double d42 = (z21 ? d25 : 0.0d) + d7 + d20;
                                    if (z20) {
                                        z13 = z21;
                                        d21 = 0.0d;
                                    } else {
                                        z13 = z21;
                                        d21 = d24 + d42;
                                    }
                                    double c10 = f10.c(d21);
                                    double d43 = f10.d();
                                    boolean z22 = z13;
                                    z.b(f10.D, f10.f6465i);
                                    int i25 = f10.I + 1;
                                    r0[] r0VarArr = f10.f6479y;
                                    if (i25 < r0VarArr.length) {
                                        f10.I = i25;
                                        r0 r0Var2 = r0VarArr[i25];
                                        c6 = c8;
                                        f10.f6475u += e4.f.r(r0Var2, f10.N, f11, f10.f6471q);
                                    } else {
                                        c6 = c8;
                                    }
                                    double d44 = f10.f6475u;
                                    z.b(f10.E, f10.j);
                                    int i26 = f10.J + 1;
                                    r0[] r0VarArr2 = f10.f6480z;
                                    if (i26 < r0VarArr2.length) {
                                        f10.J = i26;
                                        f10.f6476v += e4.f.r(r0VarArr2[i26], f10.O, f11, f10.f6471q);
                                    }
                                    double d45 = f10.f6476v;
                                    float f13 = f11;
                                    z.b(f10.F, f10.k);
                                    int min = Math.min(f10.K + 1, f10.A.length - 1);
                                    f10.K = min;
                                    double d46 = f10.A[min];
                                    if (z20 || z22) {
                                        paint2 = paint;
                                        matrix = matrix2;
                                        fArr = fArr5;
                                    } else {
                                        double d47 = d20 * d31;
                                        double d48 = (((c10 + d44) * d31) + d15) - (d42 * d31);
                                        if (z15) {
                                            double d49 = d48 + d47;
                                            float[] fArr6 = fArr5;
                                            double d50 = d47 / 2.0d;
                                            double d51 = d48 + d50;
                                            if (d51 <= d13 && d51 >= d32) {
                                                if (z10) {
                                                    pathMeasure.getMatrix((float) d51, matrix3, 3);
                                                    zVar = f10;
                                                    fArr = fArr6;
                                                    matrix = matrix2;
                                                } else {
                                                    if (d48 < 0.0d) {
                                                        zVar = f10;
                                                        float f14 = f2;
                                                        pathMeasure.getMatrix(f14, matrix2, 3);
                                                        matrix2.preTranslate((float) d48, f14);
                                                        i13 = 1;
                                                    } else {
                                                        zVar = f10;
                                                        float f15 = (float) d48;
                                                        i13 = 1;
                                                        pathMeasure.getMatrix(f15, matrix2, 1);
                                                    }
                                                    pathMeasure.getMatrix((float) d51, matrix3, i13);
                                                    if (d49 > d12) {
                                                        pathMeasure.getMatrix((float) d12, matrix4, 3);
                                                        matrix4.preTranslate((float) (d49 - d12), 0.0f);
                                                    } else {
                                                        pathMeasure.getMatrix((float) d49, matrix4, i13);
                                                    }
                                                    matrix2.getValues(fArr4);
                                                    matrix4.getValues(fArr6);
                                                    fArr = fArr6;
                                                    matrix = matrix2;
                                                    matrix3.preRotate((float) (Math.atan2(fArr6[5] - fArr4[5], fArr6[2] - fArr4[2]) * 57.29577951308232d * d31));
                                                }
                                                matrix3.preTranslate((float) (-d50), (float) (d45 + d41));
                                                d22 = d35;
                                                i12 = i24;
                                                matrix3.preScale((float) d22, i12);
                                                matrix3.postTranslate(0.0f, (float) d43);
                                            } else {
                                                paint2 = paint;
                                                fArr = fArr6;
                                                matrix = matrix2;
                                            }
                                        } else {
                                            matrix = matrix2;
                                            fArr = fArr5;
                                            zVar = f10;
                                            d22 = d35;
                                            i12 = i24;
                                            matrix3.setTranslate((float) d48, (float) (d43 + d45 + d41));
                                        }
                                        matrix3.preRotate((float) d46);
                                        if (z12) {
                                            float[] fArr7 = fArr4;
                                            path4 = new Path();
                                            int length3 = str5.length();
                                            pathMeasure2 = pathMeasure;
                                            fArr2 = fArr7;
                                            i24 = i12;
                                            str2 = str5;
                                            paint2 = paint;
                                            paint2.getTextPath(str2, 0, length3, 0.0f, 0.0f, path4);
                                            arrayList4 = arrayList10;
                                        } else {
                                            i24 = i12;
                                            pathMeasure2 = pathMeasure;
                                            fArr2 = fArr4;
                                            str2 = str5;
                                            int i27 = c6 >> '\b';
                                            int[] iArr2 = iArr[i27];
                                            int i28 = iArr2 == null ? 0 : iArr2[c6 & 255];
                                            if (i28 != 0) {
                                                arrayList4 = arrayList10;
                                                path3 = (Path) arrayList4.get(i28);
                                                paint2 = paint;
                                            } else {
                                                path3 = new Path();
                                                paint2 = paint;
                                                ArrayList arrayList11 = arrayList10;
                                                paint2.getTextPath(str2, 0, 1, 0.0f, 0.0f, path3);
                                                int[] iArr3 = iArr[i27];
                                                if (iArr3 == null) {
                                                    iArr3 = new int[IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER];
                                                    iArr[i27] = iArr3;
                                                }
                                                iArr3[c6 & 255] = arrayList11.size();
                                                arrayList4 = arrayList11;
                                                arrayList4.add(path3);
                                            }
                                            Path path8 = new Path();
                                            path8.addPath(path3);
                                            path4 = path8;
                                        }
                                        RectF rectF = new RectF();
                                        path4.computeBounds(rectF, true);
                                        if (rectF.width() == 0.0f) {
                                            canvas.save();
                                            canvas.concat(matrix3);
                                            arrayList2.add(str2);
                                            arrayList3 = arrayList8;
                                            arrayList3.add(new Matrix(matrix3));
                                            canvas.drawText(str2, 0.0f, 0.0f, paint2);
                                            canvas.restore();
                                            path2 = path7;
                                        } else {
                                            arrayList3 = arrayList8;
                                            path4.transform(matrix3);
                                            path2 = path7;
                                            path2.addPath(path4);
                                        }
                                        d35 = d22;
                                        path7 = path2;
                                        arrayList10 = arrayList4;
                                        arrayList8 = arrayList3;
                                        pathMeasure = pathMeasure2;
                                        fArr4 = fArr2;
                                        i6 = i24;
                                        matrix2 = matrix;
                                        f10 = zVar;
                                        length = i11;
                                        f11 = f13;
                                        i10 = i21 + 1;
                                        fArr5 = fArr;
                                    }
                                    pathMeasure2 = pathMeasure;
                                    zVar = f10;
                                    fArr2 = fArr4;
                                    path2 = path7;
                                    arrayList3 = arrayList8;
                                    arrayList4 = arrayList10;
                                    d22 = d35;
                                    d35 = d22;
                                    path7 = path2;
                                    arrayList10 = arrayList4;
                                    arrayList8 = arrayList3;
                                    pathMeasure = pathMeasure2;
                                    fArr4 = fArr2;
                                    i6 = i24;
                                    matrix2 = matrix;
                                    f10 = zVar;
                                    length = i11;
                                    f11 = f13;
                                    i10 = i21 + 1;
                                    fArr5 = fArr;
                                }
                                path = path7;
                                a2Var = this;
                                a2Var.N = path;
                                a2Var.g();
                                return a2Var.N;
                            }
                            d18 = d17;
                            d19 = d18;
                            Matrix matrix22 = new Matrix();
                            Matrix matrix32 = new Matrix();
                            Matrix matrix42 = new Matrix();
                            float[] fArr42 = new float[9];
                            float[] fArr52 = new float[9];
                            double d412 = d19;
                            i10 = 0;
                            while (i10 < length) {
                            }
                            path = path7;
                            a2Var = this;
                            a2Var.N = path;
                            a2Var.g();
                            return a2Var.N;
                        }
                        d8 = -k;
                    }
                    arrayList2 = arrayList5;
                    double d272 = f10.f6471q;
                    double d282 = d8;
                    if (z15) {
                    }
                    r0Var = a2Var.f6350y;
                    double d302 = 1.0d;
                    if (r0Var != null) {
                    }
                    double d312 = i6;
                    double d322 = d14;
                    double d332 = d302 * d312;
                    Paint.FontMetrics fontMetrics2 = paint2.getFontMetrics();
                    ArrayList arrayList102 = arrayList7;
                    double d342 = fontMetrics2.descent;
                    float f122 = fontMetrics2.leading;
                    double d352 = d332;
                    double d362 = f122 + d342;
                    double d372 = (-fontMetrics2.ascent) + f122;
                    double d382 = -fontMetrics2.top;
                    double d392 = d382 + d362;
                    if (a2Var.E == null) {
                    }
                    str = a2Var.E;
                    if (a2Var.G == null) {
                    }
                    d16 = d382;
                    if (a2Var.G == null) {
                    }
                    c2Var = a2Var.G;
                    if (c2Var != null) {
                    }
                    if (str != null) {
                        switch (str.hashCode()) {
                            case -1720785339:
                                break;
                            case 114240:
                                break;
                            case 109801339:
                                break;
                        }
                        switch (r25) {
                        }
                        Matrix matrix222 = new Matrix();
                        Matrix matrix322 = new Matrix();
                        Matrix matrix422 = new Matrix();
                        float[] fArr422 = new float[9];
                        float[] fArr522 = new float[9];
                        double d4122 = d19;
                        i10 = 0;
                        while (i10 < length) {
                        }
                        path = path7;
                        a2Var = this;
                        a2Var.N = path;
                        a2Var.g();
                        return a2Var.N;
                    }
                    d18 = d17;
                    d19 = d18;
                    Matrix matrix2222 = new Matrix();
                    Matrix matrix3222 = new Matrix();
                    Matrix matrix4222 = new Matrix();
                    float[] fArr4222 = new float[9];
                    float[] fArr5222 = new float[9];
                    double d41222 = d19;
                    i10 = 0;
                    while (i10 < length) {
                    }
                    path = path7;
                    a2Var = this;
                    a2Var.N = path;
                    a2Var.g();
                    return a2Var.N;
                }
            } else {
                z6 = z16;
            }
            z7 = false;
            i5 = Build.VERSION.SDK_INT;
            if (z7) {
            }
            if (i5 >= 26) {
            }
            ReadableMap readableMap2 = xVar.f6440d;
            float[] fArr32 = new float[length];
            paint2.getTextWidths(str3, fArr32);
            int i162 = xVar.j;
            arrayList = a2Var.f().a;
            ViewParent parent22 = a2Var.getParent();
            size = arrayList.size() - 1;
            f2 f2Var22 = a2Var;
            while (size >= 0) {
                ArrayList arrayList92 = arrayList;
                if (((x) arrayList.get(size)).j != 1) {
                }
            }
            f2Var = f2Var22;
            double k5 = f2Var.k(paint2);
            b10 = f0.e.b(i162);
            if (b10 != 1) {
            }
            arrayList2 = arrayList5;
            double d2722 = f10.f6471q;
            double d2822 = d8;
            if (z15) {
            }
            r0Var = a2Var.f6350y;
            double d3022 = 1.0d;
            if (r0Var != null) {
            }
            double d3122 = i6;
            double d3222 = d14;
            double d3322 = d3022 * d3122;
            Paint.FontMetrics fontMetrics22 = paint2.getFontMetrics();
            ArrayList arrayList1022 = arrayList7;
            double d3422 = fontMetrics22.descent;
            float f1222 = fontMetrics22.leading;
            double d3522 = d3322;
            double d3622 = f1222 + d3422;
            double d3722 = (-fontMetrics22.ascent) + f1222;
            double d3822 = -fontMetrics22.top;
            double d3922 = d3822 + d3622;
            if (a2Var.E == null) {
            }
            str = a2Var.E;
            if (a2Var.G == null) {
            }
            d16 = d3822;
            if (a2Var.G == null) {
            }
            c2Var = a2Var.G;
            if (c2Var != null) {
            }
            if (str != null) {
            }
            d18 = d17;
            d19 = d18;
            Matrix matrix22222 = new Matrix();
            Matrix matrix32222 = new Matrix();
            Matrix matrix42222 = new Matrix();
            float[] fArr42222 = new float[9];
            float[] fArr52222 = new float[9];
            double d412222 = d19;
            i10 = 0;
            while (i10 < length) {
            }
            path = path7;
            a2Var = this;
            a2Var.N = path;
            a2Var.g();
            return a2Var.N;
        }
        path = path6;
        a2Var.N = path;
        a2Var.g();
        return a2Var.N;
    }

    @Override // com.horcrux.svg.a0, com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public final int hitTest(float[] fArr) {
        Region region;
        if (this.O == null) {
            return super.hitTest(fArr);
        }
        if (this.mPath != null && this.mInvertible) {
            float[] fArr2 = new float[2];
            this.mInvMatrix.mapPoints(fArr2, fArr);
            this.mInvTransform.mapPoints(fArr2);
            int round = Math.round(fArr2[0]);
            int round2 = Math.round(fArr2[1]);
            initBounds();
            Region region2 = this.mRegion;
            if ((region2 != null && region2.contains(round, round2)) || ((region = this.mStrokeRegion) != null && region.contains(round, round2))) {
                if (getClipPath() == null || this.mClipRegion.contains(round, round2)) {
                    return getId();
                }
                return -1;
            }
        }
        return -1;
    }

    @Override // com.horcrux.svg.f2, com.horcrux.svg.VirtualView, android.view.View
    public final void invalidate() {
        this.N = null;
        super.invalidate();
    }

    @Override // com.horcrux.svg.f2
    public final double k(Paint paint) {
        if (!Double.isNaN(this.M)) {
            return this.M;
        }
        String str = this.O;
        double d6 = 0.0d;
        if (str == null) {
            for (int i5 = 0; i5 < getChildCount(); i5++) {
                View childAt = getChildAt(i5);
                if (childAt instanceof f2) {
                    d6 = ((f2) childAt).k(paint) + d6;
                }
            }
            this.M = d6;
            return d6;
        }
        if (str.length() == 0) {
            this.M = 0.0d;
            return 0.0d;
        }
        x xVar = f().f6472r;
        n(paint, xVar);
        m(paint, xVar);
        double measureText = paint.measureText(str);
        this.M = measureText;
        return measureText;
    }

    public final void m(Paint paint, x xVar) {
        int i5 = Build.VERSION.SDK_INT;
        double d6 = xVar.f6448n;
        String str = xVar.f6443g;
        paint.setLetterSpacing((float) (d6 / (xVar.a * this.mScale)));
        if (d6 == 0.0d && xVar.f6445i == 1) {
            paint.setFontFeatureSettings("'rlig', 'liga', 'clig', 'calt', 'locl', 'ccmp', 'mark', 'mkmk','kern', 'hlig', 'cala', " + str);
        } else {
            paint.setFontFeatureSettings("'rlig', 'liga', 'clig', 'calt', 'locl', 'ccmp', 'mark', 'mkmk','kern', 'liga' 0, 'clig' 0, 'dlig' 0, 'hlig' 0, 'cala' 0, " + str);
        }
        if (i5 >= 26) {
            paint.setFontVariationSettings("'wght' " + xVar.f6442f + xVar.f6444h);
        }
    }

    public final void n(Paint paint, x xVar) {
        Typeface createFromAsset;
        d2 d2Var = xVar.f6441e;
        String str = xVar.f6444h;
        int i5 = 0;
        boolean z5 = d2Var == d2.Bold || xVar.f6442f >= 550;
        boolean z6 = xVar.f6439c == 2;
        if (z5 && z6) {
            i5 = 3;
        } else if (z5) {
            i5 = 1;
        } else if (z6) {
            i5 = 2;
        }
        int i6 = xVar.f6442f;
        String str2 = xVar.f6438b;
        AssetManager assetManager = this.S;
        Typeface typeface = null;
        if (str2 != null && str2.length() > 0) {
            String f2 = s4.h.f("fonts/", str2, ".otf");
            String f10 = s4.h.f("fonts/", str2, ".ttf");
            if (Build.VERSION.SDK_INT >= 26) {
                Typeface.Builder builder = new Typeface.Builder(assetManager, f2);
                builder.setFontVariationSettings("'wght' " + i6 + str);
                builder.setWeight(i6);
                builder.setItalic(z6);
                typeface = builder.build();
                if (typeface == null) {
                    Typeface.Builder builder2 = new Typeface.Builder(assetManager, f10);
                    builder2.setFontVariationSettings("'wght' " + i6 + str);
                    builder2.setWeight(i6);
                    builder2.setItalic(z6);
                    createFromAsset = builder2.build();
                    typeface = createFromAsset;
                }
            } else {
                try {
                    try {
                        typeface = Typeface.create(Typeface.createFromAsset(assetManager, f2), i5);
                    } catch (Exception unused) {
                    }
                } catch (Exception unused2) {
                    createFromAsset = Typeface.createFromAsset(assetManager, f10);
                    try {
                        typeface = Typeface.create(createFromAsset, i5);
                    } catch (Exception unused3) {
                    }
                }
            }
        }
        if (typeface == null) {
            try {
                typeface = ReactFontManager.getInstance().getTypeface(str2, i5, assetManager);
            } catch (Exception unused4) {
            }
        }
        if (Build.VERSION.SDK_INT >= 28) {
            typeface = Typeface.create(typeface, i6, z6);
        }
        paint.setLinearText(true);
        paint.setSubpixelText(true);
        paint.setTypeface(typeface);
        paint.setTextSize((float) (xVar.a * this.mScale));
        paint.setLetterSpacing(0.0f);
    }

    public final void o(Canvas canvas, Paint paint) {
        z f2 = f();
        h();
        x xVar = f2.f6472r;
        TextPaint textPaint = new TextPaint(paint);
        n(textPaint, xVar);
        m(textPaint, xVar);
        double d6 = f2.f6471q;
        int b10 = f0.e.b(xVar.j);
        Layout.Alignment alignment = b10 != 1 ? b10 != 2 ? Layout.Alignment.ALIGN_NORMAL : Layout.Alignment.ALIGN_OPPOSITE : Layout.Alignment.ALIGN_CENTER;
        SpannableString spannableString = new SpannableString(this.O);
        StaticLayout build = StaticLayout.Builder.obtain(spannableString, 0, spannableString.length(), textPaint, (int) e4.f.r(this.f6349x, canvas.getWidth(), this.mScale, d6)).setAlignment(alignment).setLineSpacing(0.0f, 1.0f).setIncludePad(true).setBreakStrategy(1).setHyphenationFrequency(1).build();
        int lineAscent = build.getLineAscent(0);
        float c6 = (float) f2.c(0.0d);
        float d7 = (float) (f2.d() + lineAscent);
        g();
        canvas.save();
        canvas.translate(c6, d7);
        build.draw(canvas);
        canvas.restore();
    }
}
