package n3;

import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.uimanager.ViewProps;
import java.util.ArrayDeque;
import java.util.ArrayList;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes.dex */
public final class p extends g {
    public static final PorterDuff.Mode G = PorterDuff.Mode.SRC_IN;
    public final Matrix E;
    public final Rect F;

    /* renamed from: e, reason: collision with root package name */
    public n f14832e;

    /* renamed from: i, reason: collision with root package name */
    public PorterDuffColorFilter f14833i;

    /* renamed from: v, reason: collision with root package name */
    public ColorFilter f14834v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f14835w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f14836x;

    /* renamed from: y, reason: collision with root package name */
    public final float[] f14837y;

    public p() {
        this.f14836x = true;
        this.f14837y = new float[9];
        this.E = new Matrix();
        this.F = new Rect();
        n nVar = new n();
        nVar.f14824c = null;
        nVar.f14825d = G;
        nVar.f14823b = new m();
        this.f14832e = nVar;
    }

    public final PorterDuffColorFilter a(ColorStateList colorStateList, PorterDuff.Mode mode) {
        if (colorStateList == null || mode == null) {
            return null;
        }
        return new PorterDuffColorFilter(colorStateList.getColorForState(getState(), 0), mode);
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean canApplyTheme() {
        Drawable drawable = this.f14790d;
        if (drawable == null) {
            return false;
        }
        drawable.canApplyTheme();
        return false;
    }

    @Override // android.graphics.drawable.Drawable
    public final void draw(Canvas canvas) {
        Paint paint;
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.draw(canvas);
            return;
        }
        Rect rect = this.F;
        copyBounds(rect);
        if (rect.width() <= 0 || rect.height() <= 0) {
            return;
        }
        ColorFilter colorFilter = this.f14834v;
        if (colorFilter == null) {
            colorFilter = this.f14833i;
        }
        Matrix matrix = this.E;
        canvas.getMatrix(matrix);
        float[] fArr = this.f14837y;
        matrix.getValues(fArr);
        float abs = Math.abs(fArr[0]);
        float abs2 = Math.abs(fArr[4]);
        float abs3 = Math.abs(fArr[1]);
        float abs4 = Math.abs(fArr[3]);
        if (abs3 != 0.0f || abs4 != 0.0f) {
            abs = 1.0f;
            abs2 = 1.0f;
        }
        int width = (int) (rect.width() * abs);
        int min = Math.min(RecyclerView.ItemAnimator.FLAG_MOVED, width);
        int min2 = Math.min(RecyclerView.ItemAnimator.FLAG_MOVED, (int) (rect.height() * abs2));
        if (min <= 0 || min2 <= 0) {
            return;
        }
        int save = canvas.save();
        canvas.translate(rect.left, rect.top);
        if (isAutoMirrored() && getLayoutDirection() == 1) {
            canvas.translate(rect.width(), 0.0f);
            canvas.scale(-1.0f, 1.0f);
        }
        rect.offsetTo(0, 0);
        n nVar = this.f14832e;
        Bitmap bitmap = nVar.f14827f;
        if (bitmap == null || min != bitmap.getWidth() || min2 != nVar.f14827f.getHeight()) {
            nVar.f14827f = Bitmap.createBitmap(min, min2, Bitmap.Config.ARGB_8888);
            nVar.k = true;
        }
        if (this.f14836x) {
            n nVar2 = this.f14832e;
            if (nVar2.k || nVar2.f14828g != nVar2.f14824c || nVar2.f14829h != nVar2.f14825d || nVar2.j != nVar2.f14826e || nVar2.f14830i != nVar2.f14823b.getRootAlpha()) {
                n nVar3 = this.f14832e;
                nVar3.f14827f.eraseColor(0);
                Canvas canvas2 = new Canvas(nVar3.f14827f);
                m mVar = nVar3.f14823b;
                mVar.a(mVar.f14816g, m.f14810p, canvas2, min, min2);
                n nVar4 = this.f14832e;
                nVar4.f14828g = nVar4.f14824c;
                nVar4.f14829h = nVar4.f14825d;
                nVar4.f14830i = nVar4.f14823b.getRootAlpha();
                nVar4.j = nVar4.f14826e;
                nVar4.k = false;
            }
        } else {
            n nVar5 = this.f14832e;
            nVar5.f14827f.eraseColor(0);
            Canvas canvas3 = new Canvas(nVar5.f14827f);
            m mVar2 = nVar5.f14823b;
            mVar2.a(mVar2.f14816g, m.f14810p, canvas3, min, min2);
        }
        n nVar6 = this.f14832e;
        if (nVar6.f14823b.getRootAlpha() >= 255 && colorFilter == null) {
            paint = null;
        } else {
            if (nVar6.f14831l == null) {
                Paint paint2 = new Paint();
                nVar6.f14831l = paint2;
                paint2.setFilterBitmap(true);
            }
            nVar6.f14831l.setAlpha(nVar6.f14823b.getRootAlpha());
            nVar6.f14831l.setColorFilter(colorFilter);
            paint = nVar6.f14831l;
        }
        canvas.drawBitmap(nVar6.f14827f, (Rect) null, rect, paint);
        canvas.restoreToCount(save);
    }

    @Override // android.graphics.drawable.Drawable
    public final int getAlpha() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getAlpha() : this.f14832e.f14823b.getRootAlpha();
    }

    @Override // android.graphics.drawable.Drawable
    public final int getChangingConfigurations() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getChangingConfigurations() : super.getChangingConfigurations() | this.f14832e.getChangingConfigurations();
    }

    @Override // android.graphics.drawable.Drawable
    public final ColorFilter getColorFilter() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getColorFilter() : this.f14834v;
    }

    @Override // android.graphics.drawable.Drawable
    public final Drawable.ConstantState getConstantState() {
        if (this.f14790d != null) {
            return new o(this.f14790d.getConstantState());
        }
        this.f14832e.a = getChangingConfigurations();
        return this.f14832e;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicHeight() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getIntrinsicHeight() : (int) this.f14832e.f14823b.f14818i;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getIntrinsicWidth() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.getIntrinsicWidth() : (int) this.f14832e.f14823b.f14817h;
    }

    @Override // android.graphics.drawable.Drawable
    public final int getOpacity() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            return drawable.getOpacity();
        }
        return -3;
    }

    @Override // android.graphics.drawable.Drawable
    public final void inflate(Resources resources, XmlPullParser xmlPullParser, AttributeSet attributeSet) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.inflate(resources, xmlPullParser, attributeSet);
        } else {
            inflate(resources, xmlPullParser, attributeSet, null);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void invalidateSelf() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.invalidateSelf();
        } else {
            super.invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean isAutoMirrored() {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.isAutoMirrored() : this.f14832e.f14826e;
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean isStateful() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            return drawable.isStateful();
        }
        if (super.isStateful()) {
            return true;
        }
        n nVar = this.f14832e;
        if (nVar == null) {
            return false;
        }
        m mVar = nVar.f14823b;
        if (mVar.f14821n == null) {
            mVar.f14821n = Boolean.valueOf(mVar.f14816g.a());
        }
        if (mVar.f14821n.booleanValue()) {
            return true;
        }
        ColorStateList colorStateList = this.f14832e.f14824c;
        return colorStateList != null && colorStateList.isStateful();
    }

    @Override // android.graphics.drawable.Drawable
    public final Drawable mutate() {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.mutate();
            return this;
        }
        if (!this.f14835w && super.mutate() == this) {
            n nVar = this.f14832e;
            n nVar2 = new n();
            nVar2.f14824c = null;
            nVar2.f14825d = G;
            if (nVar != null) {
                nVar2.a = nVar.a;
                m mVar = new m(nVar.f14823b);
                nVar2.f14823b = mVar;
                if (nVar.f14823b.f14814e != null) {
                    mVar.f14814e = new Paint(nVar.f14823b.f14814e);
                }
                if (nVar.f14823b.f14813d != null) {
                    nVar2.f14823b.f14813d = new Paint(nVar.f14823b.f14813d);
                }
                nVar2.f14824c = nVar.f14824c;
                nVar2.f14825d = nVar.f14825d;
                nVar2.f14826e = nVar.f14826e;
            }
            this.f14832e = nVar2;
            this.f14835w = true;
        }
        return this;
    }

    @Override // android.graphics.drawable.Drawable
    public final void onBoundsChange(Rect rect) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setBounds(rect);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean onStateChange(int[] iArr) {
        boolean z5;
        PorterDuff.Mode mode;
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            return drawable.setState(iArr);
        }
        n nVar = this.f14832e;
        ColorStateList colorStateList = nVar.f14824c;
        if (colorStateList == null || (mode = nVar.f14825d) == null) {
            z5 = false;
        } else {
            this.f14833i = a(colorStateList, mode);
            invalidateSelf();
            z5 = true;
        }
        m mVar = nVar.f14823b;
        if (mVar.f14821n == null) {
            mVar.f14821n = Boolean.valueOf(mVar.f14816g.a());
        }
        if (mVar.f14821n.booleanValue()) {
            boolean b10 = nVar.f14823b.f14816g.b(iArr);
            nVar.k |= b10;
            if (b10) {
                invalidateSelf();
                return true;
            }
        }
        return z5;
    }

    @Override // android.graphics.drawable.Drawable
    public final void scheduleSelf(Runnable runnable, long j) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.scheduleSelf(runnable, j);
        } else {
            super.scheduleSelf(runnable, j);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAlpha(int i5) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setAlpha(i5);
        } else if (this.f14832e.f14823b.getRootAlpha() != i5) {
            this.f14832e.f14823b.setRootAlpha(i5);
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setAutoMirrored(boolean z5) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setAutoMirrored(z5);
        } else {
            this.f14832e.f14826e = z5;
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setColorFilter(ColorFilter colorFilter) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setColorFilter(colorFilter);
        } else {
            this.f14834v = colorFilter;
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTint(int i5) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            jb.a.J(drawable, i5);
        } else {
            setTintList(ColorStateList.valueOf(i5));
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTintList(ColorStateList colorStateList) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setTintList(colorStateList);
            return;
        }
        n nVar = this.f14832e;
        if (nVar.f14824c != colorStateList) {
            nVar.f14824c = colorStateList;
            this.f14833i = a(colorStateList, nVar.f14825d);
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void setTintMode(PorterDuff.Mode mode) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.setTintMode(mode);
            return;
        }
        n nVar = this.f14832e;
        if (nVar.f14825d != mode) {
            nVar.f14825d = mode;
            this.f14833i = a(nVar.f14824c, mode);
            invalidateSelf();
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final boolean setVisible(boolean z5, boolean z6) {
        Drawable drawable = this.f14790d;
        return drawable != null ? drawable.setVisible(z5, z6) : super.setVisible(z5, z6);
    }

    @Override // android.graphics.drawable.Drawable
    public final void unscheduleSelf(Runnable runnable) {
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.unscheduleSelf(runnable);
        } else {
            super.unscheduleSelf(runnable);
        }
    }

    @Override // android.graphics.drawable.Drawable
    public final void inflate(Resources resources, XmlPullParser xmlPullParser, AttributeSet attributeSet, Resources.Theme theme) {
        int i5;
        char c6;
        int i6;
        Paint.Cap cap;
        Paint.Join join;
        Drawable drawable = this.f14790d;
        if (drawable != null) {
            drawable.inflate(resources, xmlPullParser, attributeSet, theme);
            return;
        }
        n nVar = this.f14832e;
        nVar.f14823b = new m();
        TypedArray f2 = a1.b.f(resources, theme, attributeSet, a.a);
        n nVar2 = this.f14832e;
        m mVar = nVar2.f14823b;
        int i10 = !a1.b.c(xmlPullParser, "tintMode") ? -1 : f2.getInt(6, -1);
        PorterDuff.Mode mode = PorterDuff.Mode.SRC_IN;
        if (i10 == 3) {
            mode = PorterDuff.Mode.SRC_OVER;
        } else if (i10 != 5) {
            if (i10 != 9) {
                switch (i10) {
                    case 14:
                        mode = PorterDuff.Mode.MULTIPLY;
                        break;
                    case 15:
                        mode = PorterDuff.Mode.SCREEN;
                        break;
                    case 16:
                        mode = PorterDuff.Mode.ADD;
                        break;
                }
            } else {
                mode = PorterDuff.Mode.SRC_ATOP;
            }
        }
        nVar2.f14825d = mode;
        ColorStateList colorStateList = null;
        int i11 = 1;
        if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "tint") != null) {
            TypedValue typedValue = new TypedValue();
            f2.getValue(1, typedValue);
            int i12 = typedValue.type;
            if (i12 == 2) {
                throw new UnsupportedOperationException("Failed to resolve attribute at index 1: " + typedValue);
            }
            if (i12 >= 28 && i12 <= 31) {
                colorStateList = ColorStateList.valueOf(typedValue.data);
            } else {
                Resources resources2 = f2.getResources();
                int resourceId = f2.getResourceId(1, 0);
                ThreadLocal threadLocal = a1.c.a;
                try {
                    colorStateList = a1.c.a(resources2, resources2.getXml(resourceId), theme);
                } catch (Exception e9) {
                    Log.e("CSLCompat", "Failed to inflate ColorStateList.", e9);
                }
            }
        }
        ColorStateList colorStateList2 = colorStateList;
        if (colorStateList2 != null) {
            nVar2.f14824c = colorStateList2;
        }
        boolean z5 = nVar2.f14826e;
        if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "autoMirrored") != null) {
            z5 = f2.getBoolean(5, z5);
        }
        nVar2.f14826e = z5;
        float f10 = mVar.j;
        if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "viewportWidth") != null) {
            f10 = f2.getFloat(7, f10);
        }
        mVar.j = f10;
        float f11 = mVar.k;
        if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "viewportHeight") != null) {
            f11 = f2.getFloat(8, f11);
        }
        mVar.k = f11;
        if (mVar.j <= 0.0f) {
            throw new XmlPullParserException(f2.getPositionDescription() + "<vector> tag requires viewportWidth > 0");
        }
        if (f11 > 0.0f) {
            mVar.f14817h = f2.getDimension(3, mVar.f14817h);
            float dimension = f2.getDimension(2, mVar.f14818i);
            mVar.f14818i = dimension;
            if (mVar.f14817h <= 0.0f) {
                throw new XmlPullParserException(f2.getPositionDescription() + "<vector> tag requires width > 0");
            }
            if (dimension > 0.0f) {
                float alpha = mVar.getAlpha();
                if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "alpha") != null) {
                    alpha = f2.getFloat(4, alpha);
                }
                mVar.setAlpha(alpha);
                String string = f2.getString(0);
                if (string != null) {
                    mVar.f14820m = string;
                    mVar.f14822o.put(string, mVar);
                }
                f2.recycle();
                nVar.a = getChangingConfigurations();
                nVar.k = true;
                n nVar3 = this.f14832e;
                m mVar2 = nVar3.f14823b;
                ArrayDeque arrayDeque = new ArrayDeque();
                j jVar = mVar2.f14816g;
                s.e eVar = mVar2.f14822o;
                arrayDeque.push(jVar);
                int eventType = xmlPullParser.getEventType();
                int depth = xmlPullParser.getDepth() + 1;
                boolean z6 = true;
                while (eventType != i11 && (xmlPullParser.getDepth() >= depth || eventType != 3)) {
                    if (eventType == 2) {
                        String name = xmlPullParser.getName();
                        j jVar2 = (j) arrayDeque.peek();
                        if (jVar2 != null) {
                            ArrayList arrayList = jVar2.f14800b;
                            i5 = depth;
                            if ("path".equals(name)) {
                                i iVar = new i();
                                iVar.f14792e = 0.0f;
                                iVar.f14794g = 1.0f;
                                iVar.f14795h = 1.0f;
                                iVar.f14796i = 0.0f;
                                iVar.j = 1.0f;
                                iVar.k = 0.0f;
                                Paint.Cap cap2 = Paint.Cap.BUTT;
                                iVar.f14797l = cap2;
                                Paint.Join join2 = Paint.Join.MITER;
                                iVar.f14798m = join2;
                                iVar.f14799n = 4.0f;
                                TypedArray f12 = a1.b.f(resources, theme, attributeSet, a.f14778c);
                                if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "pathData") != null) {
                                    String string2 = f12.getString(0);
                                    if (string2 != null) {
                                        iVar.f14808b = string2;
                                    }
                                    String string3 = f12.getString(2);
                                    if (string3 != null) {
                                        iVar.a = ys.l.i(string3);
                                    }
                                    iVar.f14793f = a1.b.b(f12, xmlPullParser, theme, "fillColor", 1);
                                    float f13 = iVar.f14795h;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "fillAlpha") != null) {
                                        f13 = f12.getFloat(12, f13);
                                    }
                                    iVar.f14795h = f13;
                                    int i13 = xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "strokeLineCap") != null ? f12.getInt(8, -1) : -1;
                                    Paint.Cap cap3 = iVar.f14797l;
                                    if (i13 == 0) {
                                        cap = cap2;
                                    } else if (i13 != 1) {
                                        cap = i13 != 2 ? cap3 : Paint.Cap.SQUARE;
                                    } else {
                                        cap = Paint.Cap.ROUND;
                                    }
                                    iVar.f14797l = cap;
                                    int i14 = xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "strokeLineJoin") != null ? f12.getInt(9, -1) : -1;
                                    Paint.Join join3 = iVar.f14798m;
                                    if (i14 == 0) {
                                        join = join2;
                                    } else if (i14 != 1) {
                                        join = i14 != 2 ? join3 : Paint.Join.BEVEL;
                                    } else {
                                        join = Paint.Join.ROUND;
                                    }
                                    iVar.f14798m = join;
                                    float f14 = iVar.f14799n;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "strokeMiterLimit") != null) {
                                        f14 = f12.getFloat(10, f14);
                                    }
                                    iVar.f14799n = f14;
                                    iVar.f14791d = a1.b.b(f12, xmlPullParser, theme, "strokeColor", 3);
                                    float f15 = iVar.f14794g;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "strokeAlpha") != null) {
                                        f15 = f12.getFloat(11, f15);
                                    }
                                    iVar.f14794g = f15;
                                    float f16 = iVar.f14792e;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "strokeWidth") != null) {
                                        f16 = f12.getFloat(4, f16);
                                    }
                                    iVar.f14792e = f16;
                                    float f17 = iVar.j;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "trimPathEnd") != null) {
                                        f17 = f12.getFloat(6, f17);
                                    }
                                    iVar.j = f17;
                                    float f18 = iVar.k;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "trimPathOffset") != null) {
                                        f18 = f12.getFloat(7, f18);
                                    }
                                    iVar.k = f18;
                                    float f19 = iVar.f14796i;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "trimPathStart") != null) {
                                        f19 = f12.getFloat(5, f19);
                                    }
                                    iVar.f14796i = f19;
                                    int i15 = iVar.f14809c;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "fillType") != null) {
                                        i15 = f12.getInt(13, i15);
                                    }
                                    iVar.f14809c = i15;
                                }
                                f12.recycle();
                                arrayList.add(iVar);
                                if (iVar.getPathName() != null) {
                                    eVar.put(iVar.getPathName(), iVar);
                                }
                                nVar3.a = nVar3.a;
                                z6 = false;
                            } else {
                                c6 = '\b';
                                if ("clip-path".equals(name)) {
                                    h hVar = new h();
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", "pathData") != null) {
                                        TypedArray f20 = a1.b.f(resources, theme, attributeSet, a.f14779d);
                                        String string4 = f20.getString(0);
                                        if (string4 != null) {
                                            hVar.f14808b = string4;
                                        }
                                        String string5 = f20.getString(1);
                                        if (string5 != null) {
                                            hVar.a = ys.l.i(string5);
                                        }
                                        hVar.f14809c = !a1.b.c(xmlPullParser, "fillType") ? 0 : f20.getInt(2, 0);
                                        f20.recycle();
                                    }
                                    arrayList.add(hVar);
                                    if (hVar.getPathName() != null) {
                                        eVar.put(hVar.getPathName(), hVar);
                                    }
                                    nVar3.a = nVar3.a;
                                } else if ("group".equals(name)) {
                                    j jVar3 = new j();
                                    TypedArray f21 = a1.b.f(resources, theme, attributeSet, a.f14777b);
                                    float f22 = jVar3.f14801c;
                                    if (a1.b.c(xmlPullParser, ViewProps.ROTATION)) {
                                        f22 = f21.getFloat(5, f22);
                                    }
                                    jVar3.f14801c = f22;
                                    jVar3.f14802d = f21.getFloat(1, jVar3.f14802d);
                                    jVar3.f14803e = f21.getFloat(2, jVar3.f14803e);
                                    float f23 = jVar3.f14804f;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", ViewProps.SCALE_X) != null) {
                                        f23 = f21.getFloat(3, f23);
                                    }
                                    jVar3.f14804f = f23;
                                    float f24 = jVar3.f14805g;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", ViewProps.SCALE_Y) != null) {
                                        f24 = f21.getFloat(4, f24);
                                    }
                                    jVar3.f14805g = f24;
                                    float f25 = jVar3.f14806h;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", ViewProps.TRANSLATE_X) != null) {
                                        f25 = f21.getFloat(6, f25);
                                    }
                                    jVar3.f14806h = f25;
                                    float f26 = jVar3.f14807i;
                                    if (xmlPullParser.getAttributeValue("http://schemas.android.com/apk/res/android", ViewProps.TRANSLATE_Y) != null) {
                                        f26 = f21.getFloat(7, f26);
                                    }
                                    jVar3.f14807i = f26;
                                    String string6 = f21.getString(0);
                                    if (string6 != null) {
                                        jVar3.k = string6;
                                    }
                                    jVar3.c();
                                    f21.recycle();
                                    arrayList.add(jVar3);
                                    arrayDeque.push(jVar3);
                                    if (jVar3.getGroupName() != null) {
                                        eVar.put(jVar3.getGroupName(), jVar3);
                                    }
                                    nVar3.a = nVar3.a;
                                    i6 = 1;
                                }
                                i6 = 1;
                            }
                        } else {
                            i5 = depth;
                        }
                        c6 = '\b';
                        i6 = 1;
                    } else {
                        i5 = depth;
                        c6 = '\b';
                        i6 = 1;
                        if (eventType == 3 && "group".equals(xmlPullParser.getName())) {
                            arrayDeque.pop();
                        }
                    }
                    eventType = xmlPullParser.next();
                    i11 = i6;
                    depth = i5;
                }
                if (!z6) {
                    this.f14833i = a(nVar.f14824c, nVar.f14825d);
                    return;
                }
                throw new XmlPullParserException("no path defined");
            }
            throw new XmlPullParserException(f2.getPositionDescription() + "<vector> tag requires height > 0");
        }
        throw new XmlPullParserException(f2.getPositionDescription() + "<vector> tag requires viewportHeight > 0");
    }

    public p(n nVar) {
        this.f14836x = true;
        this.f14837y = new float[9];
        this.E = new Matrix();
        this.F = new Rect();
        this.f14832e = nVar;
        this.f14833i = a(nVar.f14824c, nVar.f14825d);
    }
}
