package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;
import android.graphics.Region;
import android.view.View;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableMap;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public class a0 extends RenderableView {

    /* renamed from: d, reason: collision with root package name */
    public ReadableMap f6304d;

    /* renamed from: e, reason: collision with root package name */
    public z f6305e;

    /* renamed from: i, reason: collision with root package name */
    public Bitmap f6306i;

    /* renamed from: v, reason: collision with root package name */
    public Canvas f6307v;

    /* renamed from: w, reason: collision with root package name */
    public final Paint f6308w;

    public a0(ReactContext reactContext) {
        super(reactContext);
        this.f6308w = new Paint(1);
    }

    public void c(Canvas canvas, Paint paint, float f2) {
        h();
        SvgView svgView = getSvgView();
        RectF rectF = new RectF();
        if (this.mOpacity != 1.0f) {
            Bitmap bitmap = this.f6306i;
            if (bitmap == null) {
                this.f6306i = Bitmap.createBitmap(canvas.getWidth(), canvas.getHeight(), Bitmap.Config.ARGB_8888);
                this.f6307v = new Canvas(this.f6306i);
            } else {
                bitmap.recycle();
                Bitmap createBitmap = Bitmap.createBitmap(canvas.getWidth(), canvas.getHeight(), Bitmap.Config.ARGB_8888);
                this.f6306i = createBitmap;
                this.f6307v.setBitmap(createBitmap);
            }
            this.f6307v.save();
            this.f6307v.setMatrix(canvas.getMatrix());
        } else {
            this.f6307v = canvas;
        }
        this.elements = new ArrayList<>();
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (!(childAt instanceof g0)) {
                if (childAt instanceof VirtualView) {
                    VirtualView virtualView = (VirtualView) childAt;
                    if (!"none".equals(virtualView.mDisplay)) {
                        boolean z5 = virtualView instanceof RenderableView;
                        if (z5) {
                            ((RenderableView) virtualView).mergeProperties(this);
                        }
                        int saveAndSetupCanvas = virtualView.saveAndSetupCanvas(this.f6307v, this.mCTM);
                        virtualView.render(this.f6307v, paint, f2);
                        RectF clientRect = virtualView.getClientRect();
                        if (clientRect != null) {
                            rectF.union(clientRect);
                        }
                        virtualView.restoreCanvas(this.f6307v, saveAndSetupCanvas);
                        if (z5) {
                            ((RenderableView) virtualView).resetProperties();
                        }
                        if (virtualView.isResponsible()) {
                            svgView.enableTouchEvents();
                        }
                        ArrayList<h0> arrayList = virtualView.elements;
                        if (arrayList != null) {
                            this.elements.addAll(arrayList);
                        }
                    }
                } else if (childAt instanceof SvgView) {
                    SvgView svgView2 = (SvgView) childAt;
                    if (svgView2.getChildCount() > 0) {
                        View childAt2 = svgView2.getChildAt(0);
                        if (childAt2 instanceof a0) {
                            ((a0) childAt2).mergeProperties(this);
                        }
                    }
                    svgView2.drawChildren(canvas);
                    if (svgView2.isResponsible()) {
                        svgView.enableTouchEvents();
                    }
                }
            }
        }
        if (this.mOpacity != 1.0f) {
            this.f6307v.restore();
            int save = canvas.save();
            canvas.setMatrix(null);
            int i6 = (int) (this.mOpacity * 255.0f);
            Paint paint2 = this.f6308w;
            paint2.setAlpha(i6);
            Bitmap bitmap2 = this.f6306i;
            if (bitmap2 != null) {
                canvas.drawBitmap(bitmap2, 0.0f, 0.0f, paint2);
            }
            canvas.restoreToCount(save);
        }
        setClientRect(rectF);
        g();
    }

    public final void d(Canvas canvas, Paint paint, float f2) {
        super.draw(canvas, paint, f2);
    }

    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public void draw(Canvas canvas, Paint paint, float f2) {
        i(canvas);
        clip(canvas, paint);
        c(canvas, paint, f2);
        renderMarkers(canvas, paint, f2);
    }

    public Path e(Canvas canvas, Paint paint) {
        Region.Op op2 = Region.Op.UNION;
        Path path = new Path();
        Path.Op valueOf = Path.Op.valueOf(op2.name());
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (!(childAt instanceof g0) && (childAt instanceof VirtualView)) {
                VirtualView virtualView = (VirtualView) childAt;
                Matrix matrix = virtualView.mMatrix;
                Path e9 = virtualView instanceof a0 ? ((a0) virtualView).e(canvas, paint) : virtualView.getPath(canvas, paint);
                e9.transform(matrix);
                path.op(e9, valueOf);
            }
        }
        return path;
    }

    public final z f() {
        a0 textRoot = getTextRoot();
        textRoot.getClass();
        return textRoot.f6305e;
    }

    public void g() {
        z f2 = f();
        ArrayList arrayList = f2.f6462f;
        ArrayList arrayList2 = f2.f6461e;
        ArrayList arrayList3 = f2.f6460d;
        ArrayList arrayList4 = f2.f6459c;
        ArrayList arrayList5 = f2.f6458b;
        ArrayList arrayList6 = f2.a;
        arrayList6.remove(f2.L);
        ArrayList arrayList7 = f2.f6466l;
        arrayList7.remove(f2.L);
        ArrayList arrayList8 = f2.f6467m;
        arrayList8.remove(f2.L);
        ArrayList arrayList9 = f2.f6468n;
        arrayList9.remove(f2.L);
        ArrayList arrayList10 = f2.f6469o;
        arrayList10.remove(f2.L);
        ArrayList arrayList11 = f2.f6470p;
        arrayList11.remove(f2.L);
        int i5 = f2.L - 1;
        f2.L = i5;
        int i6 = f2.B;
        int i10 = f2.C;
        int i11 = f2.D;
        int i12 = f2.E;
        int i13 = f2.F;
        f2.f6472r = (x) arrayList6.get(i5);
        f2.B = ((Integer) arrayList7.get(f2.L)).intValue();
        f2.C = ((Integer) arrayList8.get(f2.L)).intValue();
        f2.D = ((Integer) arrayList9.get(f2.L)).intValue();
        f2.E = ((Integer) arrayList10.get(f2.L)).intValue();
        f2.F = ((Integer) arrayList11.get(f2.L)).intValue();
        if (i6 != f2.B) {
            arrayList5.remove(i6);
            f2.f6477w = (r0[]) arrayList5.get(f2.B);
            f2.G = ((Integer) f2.f6463g.get(f2.B)).intValue();
        }
        if (i10 != f2.C) {
            arrayList4.remove(i10);
            f2.f6478x = (r0[]) arrayList4.get(f2.C);
            f2.H = ((Integer) f2.f6464h.get(f2.C)).intValue();
        }
        if (i11 != f2.D) {
            arrayList3.remove(i11);
            f2.f6479y = (r0[]) arrayList3.get(f2.D);
            f2.I = ((Integer) f2.f6465i.get(f2.D)).intValue();
        }
        if (i12 != f2.E) {
            arrayList2.remove(i12);
            f2.f6480z = (r0[]) arrayList2.get(f2.E);
            f2.J = ((Integer) f2.j.get(f2.E)).intValue();
        }
        if (i13 != f2.F) {
            arrayList.remove(i13);
            f2.A = (double[]) arrayList.get(f2.F);
            f2.K = ((Integer) f2.k.get(f2.F)).intValue();
        }
    }

    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public Path getPath(Canvas canvas, Paint paint) {
        Path path = this.mPath;
        if (path != null) {
            return path;
        }
        this.mPath = new Path();
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (!(childAt instanceof g0) && (childAt instanceof VirtualView)) {
                VirtualView virtualView = (VirtualView) childAt;
                this.mPath.addPath(virtualView.getPath(canvas, paint), virtualView.mMatrix);
            }
        }
        return this.mPath;
    }

    public void h() {
        z f2 = f();
        f2.f(this, this.f6304d);
        f2.e();
    }

    @Override // com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public int hitTest(float[] fArr) {
        int reactTagForTouch;
        VirtualView virtualView;
        int hitTest;
        if (!this.mInvertible) {
            return -1;
        }
        float[] fArr2 = new float[2];
        this.mInvMatrix.mapPoints(fArr2, fArr);
        this.mInvTransform.mapPoints(fArr2);
        int round = Math.round(fArr2[0]);
        int round2 = Math.round(fArr2[1]);
        Path clipPath = getClipPath();
        if (clipPath != null) {
            if (this.mClipRegionPath != clipPath) {
                this.mClipRegionPath = clipPath;
                RectF rectF = new RectF();
                this.mClipBounds = rectF;
                clipPath.computeBounds(rectF, true);
                this.mClipRegion = getRegion(clipPath, this.mClipBounds);
            }
            if (!this.mClipRegion.contains(round, round2)) {
                return -1;
            }
        }
        for (int childCount = getChildCount() - 1; childCount >= 0; childCount--) {
            View childAt = getChildAt(childCount);
            if (childAt instanceof VirtualView) {
                if (!(childAt instanceof g0) && (hitTest = (virtualView = (VirtualView) childAt).hitTest(fArr2)) != -1) {
                    return (virtualView.isResponsible() || hitTest != childAt.getId()) ? hitTest : getId();
                }
            } else if ((childAt instanceof SvgView) && (reactTagForTouch = ((SvgView) childAt).reactTagForTouch(fArr2[0], fArr2[1])) != childAt.getId()) {
                return reactTagForTouch;
            }
        }
        return -1;
    }

    public final void i(Canvas canvas) {
        RectF rectF = new RectF(canvas.getClipBounds());
        Matrix matrix = this.mMatrix;
        if (matrix != null) {
            matrix.mapRect(rectF);
        }
        this.f6305e = new z(this.mScale, rectF.width(), rectF.height());
    }

    @Override // com.horcrux.svg.RenderableView
    public void resetProperties() {
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (childAt instanceof RenderableView) {
                ((RenderableView) childAt).resetProperties();
            }
        }
    }

    @Override // com.horcrux.svg.VirtualView
    public void saveDefinition() {
        if (this.mName != null) {
            getSvgView().defineTemplate(this, this.mName);
        }
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (childAt instanceof VirtualView) {
                ((VirtualView) childAt).saveDefinition();
            }
        }
    }
}
