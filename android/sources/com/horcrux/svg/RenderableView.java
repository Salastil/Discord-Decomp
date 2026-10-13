package com.horcrux.svg;

import android.graphics.Bitmap;
import android.graphics.BitmapShader;
import android.graphics.Canvas;
import android.graphics.ColorMatrix;
import android.graphics.ColorMatrixColorFilter;
import android.graphics.DashPathEffect;
import android.graphics.LinearGradient;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.graphics.RadialGradient;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Region;
import android.graphics.Shader;
import android.util.Log;
import android.view.View;
import android.view.ViewParent;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ColorPropConverter;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.bridge.JavaOnlyArray;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.common.ReactConstants;
import com.facebook.react.touch.ReactHitSlopView;
import com.facebook.react.uimanager.PointerEvents;
import com.facebook.react.uimanager.events.RCTEventEmitter;
import com.horcrux.svg.events.SvgOnLayoutEvent;
import java.lang.reflect.Field;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public abstract class RenderableView extends VirtualView implements ReactHitSlopView {
    private static final int CAP_BUTT = 0;
    static final int CAP_ROUND = 1;
    private static final int CAP_SQUARE = 2;
    private static final int FILL_RULE_EVENODD = 0;
    static final int FILL_RULE_NONZERO = 1;
    private static final int JOIN_BEVEL = 2;
    private static final int JOIN_MITER = 0;
    static final int JOIN_ROUND = 1;
    private static final int VECTOR_EFFECT_DEFAULT = 0;
    private static final int VECTOR_EFFECT_NON_SCALING_STROKE = 1;
    static RenderableView contextElement;
    private static final Pattern regex = Pattern.compile("[0-9.-]+");
    public ReadableArray fill;
    public float fillOpacity;
    public Path.FillType fillRule;
    private ArrayList<String> mAttributeList;
    private RenderableView mCaller;
    private int mCurrentColor;
    String mFilter;
    private ArrayList<String> mLastMergedList;
    private ArrayList<Object> mOriginProperties;
    private ArrayList<String> mPropList;
    public ReadableArray stroke;
    public r0[] strokeDasharray;
    public float strokeDashoffset;
    public Paint.Cap strokeLinecap;
    public Paint.Join strokeLinejoin;
    public float strokeMiterlimit;
    public float strokeOpacity;
    public r0 strokeWidth;
    public int vectorEffect;

    public RenderableView(ReactContext reactContext) {
        super(reactContext);
        this.vectorEffect = 0;
        this.strokeWidth = new r0(1.0d);
        this.strokeOpacity = 1.0f;
        this.strokeMiterlimit = 4.0f;
        this.strokeDashoffset = 0.0f;
        this.strokeLinecap = Paint.Cap.BUTT;
        this.strokeLinejoin = Paint.Join.MITER;
        this.mCurrentColor = 0;
        this.fillOpacity = 1.0f;
        this.fillRule = Path.FillType.WINDING;
        setPivotX(0.0f);
        setPivotY(0.0f);
    }

    private ArrayList<String> getAttributeList() {
        return this.mAttributeList;
    }

    private boolean hasOwnProperty(String str) {
        ArrayList<String> arrayList = this.mAttributeList;
        return arrayList != null && arrayList.contains(str);
    }

    private void setupPaint(Paint paint, float f2, ReadableArray readableArray) {
        float f10;
        float f11;
        int[] iArr;
        float[] fArr;
        float[] fArr2;
        int[] iArr2;
        double d6;
        ReadableArray readableArray2;
        RenderableView renderableView;
        ReadableArray readableArray3;
        int i5 = readableArray.getInt(0);
        char c6 = 4;
        int i6 = 1;
        if (i5 == 0) {
            if (readableArray.size() != 2) {
                paint.setARGB((int) (readableArray.size() > 4 ? readableArray.getDouble(4) * f2 * 255.0d : 255.0f * f2), (int) (readableArray.getDouble(1) * 255.0d), (int) (readableArray.getDouble(2) * 255.0d), (int) (readableArray.getDouble(3) * 255.0d));
                return;
            } else {
                paint.setColor(((readableArray.getType(1) == ReadableType.Map ? ColorPropConverter.getColor(readableArray.getMap(1), getContext()).intValue() : readableArray.getInt(1)) & 16777215) | (Math.round((r1 >>> 24) * f2) << 24));
                return;
            }
        }
        if (i5 != 1) {
            if (i5 == 2) {
                paint.setColor((Math.round((r3 >>> 24) * f2) << 24) | (getCurrentColor() & 16777215));
                return;
            }
            if (i5 != 3) {
                if (i5 != 4 || (renderableView = contextElement) == null || (readableArray3 = renderableView.stroke) == null) {
                    return;
                }
                setupPaint(paint, f2, readableArray3);
                return;
            }
            RenderableView renderableView2 = contextElement;
            if (renderableView2 == null || (readableArray2 = renderableView2.fill) == null) {
                return;
            }
            setupPaint(paint, f2, readableArray2);
            return;
        }
        a definedBrush = getSvgView().getDefinedBrush(readableArray.getString(1));
        if (definedBrush != null) {
            RectF rectF = this.mBox;
            float f12 = this.mScale;
            int i10 = definedBrush.a;
            r0[] r0VarArr = definedBrush.f6297b;
            boolean z5 = definedBrush.f6299d;
            if (!z5) {
                rectF = new RectF(definedBrush.f6302g);
            }
            float width = rectF.width();
            float height = rectF.height();
            if (z5) {
                f11 = rectF.left;
                f10 = rectF.top;
            } else {
                f10 = 0.0f;
                f11 = 0.0f;
            }
            RectF rectF2 = new RectF(f11, f10, width + f11, f10 + height);
            float width2 = rectF2.width();
            float height2 = rectF2.height();
            float f13 = rectF2.left;
            float f14 = rectF2.top;
            float textSize = paint.getTextSize();
            if (i10 == 3) {
                double d7 = width2;
                double a = definedBrush.a(r0VarArr[0], d7, f12, textSize);
                double d8 = height2;
                double a10 = definedBrush.a(r0VarArr[1], d8, f12, textSize);
                double a11 = definedBrush.a(r0VarArr[2], d7, f12, textSize);
                double a12 = definedBrush.a(r0VarArr[3], d8, f12, textSize);
                if (a11 <= 1.0d || a12 <= 1.0d) {
                    return;
                }
                Bitmap createBitmap = Bitmap.createBitmap((int) a11, (int) a12, Bitmap.Config.ARGB_8888);
                Canvas canvas = new Canvas(createBitmap);
                j0 j0Var = definedBrush.f6303h;
                j0Var.getClass();
                float f15 = j0Var.I;
                float f16 = j0Var.mScale;
                float f17 = j0Var.J;
                RectF rectF3 = new RectF(f15 * f16, f17 * f16, (f15 + j0Var.K) * f16, (f17 + j0Var.L) * f16);
                if (rectF3.width() > 0.0f && rectF3.height() > 0.0f) {
                    RectF rectF4 = new RectF((float) a, (float) a10, (float) a11, (float) a12);
                    j0 j0Var2 = definedBrush.f6303h;
                    canvas.concat(io.sentry.config.a.t(rectF3, rectF4, j0Var2.M, j0Var2.N));
                }
                if (definedBrush.f6300e) {
                    canvas.scale(width2 / f12, height2 / f12);
                }
                definedBrush.f6303h.draw(canvas, new Paint(), f2);
                Matrix matrix = new Matrix();
                Matrix matrix2 = definedBrush.f6301f;
                if (matrix2 != null) {
                    matrix.preConcat(matrix2);
                }
                Shader.TileMode tileMode = Shader.TileMode.REPEAT;
                BitmapShader bitmapShader = new BitmapShader(createBitmap, tileMode, tileMode);
                bitmapShader.setLocalMatrix(matrix);
                paint.setShader(bitmapShader);
                return;
            }
            int size = definedBrush.f6298c.size();
            if (size == 0) {
                p8.a.v(ReactConstants.TAG, "Gradient contains no stops");
                return;
            }
            int i11 = size / 2;
            int[] iArr3 = new int[i11];
            float[] fArr3 = new float[i11];
            ReadableArray readableArray4 = definedBrush.f6298c;
            int i12 = 0;
            while (i12 < i11) {
                char c8 = c6;
                int i13 = i12 * 2;
                fArr3[i12] = (float) readableArray4.getDouble(i13);
                iArr3[i12] = (readableArray4.getInt(i13 + 1) & 16777215) | (Math.round((r8 >>> 24) * f2) << 24);
                i12++;
                c6 = c8;
                i6 = i6;
            }
            char c10 = c6;
            int i14 = i6;
            if (i11 == i14) {
                int[] iArr4 = new int[2];
                iArr4[0] = iArr3[0];
                iArr4[i14] = iArr3[0];
                float[] fArr4 = new float[2];
                fArr4[0] = fArr3[0];
                fArr4[i14] = fArr3[0];
                p8.a.v(ReactConstants.TAG, "Gradient contains only one stop");
                iArr = iArr4;
                fArr = fArr4;
            } else {
                iArr = iArr3;
                fArr = fArr3;
            }
            if (i10 == i14) {
                double d10 = width2;
                double d11 = f13;
                double a13 = definedBrush.a(r0VarArr[0], d10, f12, textSize) + d11;
                double d12 = height2;
                double d13 = f14;
                LinearGradient linearGradient = new LinearGradient((float) a13, (float) (definedBrush.a(r0VarArr[i14], d12, f12, textSize) + d13), (float) (definedBrush.a(r0VarArr[2], d10, f12, textSize) + d11), (float) (definedBrush.a(r0VarArr[3], d12, f12, textSize) + d13), iArr, fArr, Shader.TileMode.CLAMP);
                if (definedBrush.f6301f != null) {
                    Matrix matrix3 = new Matrix();
                    matrix3.preConcat(definedBrush.f6301f);
                    linearGradient.setLocalMatrix(matrix3);
                }
                paint.setShader(linearGradient);
                return;
            }
            int[] iArr5 = iArr;
            float[] fArr5 = fArr;
            if (i10 == 2) {
                double d14 = width2;
                double a14 = definedBrush.a(r0VarArr[2], d14, f12, textSize);
                double d15 = height2;
                double a15 = definedBrush.a(r0VarArr[3], d15, f12, textSize);
                if (a14 <= 0.0d || a15 <= 0.0d) {
                    fArr2 = new float[]{fArr5[0], fArr5[fArr5.length - 1]};
                    iArr2 = new int[]{iArr5[iArr5.length - 1], iArr5[iArr5.length - 1]};
                    a14 = d14;
                    d6 = d15;
                } else {
                    fArr2 = fArr5;
                    iArr2 = iArr5;
                    d6 = a15;
                }
                double d16 = d6 / a14;
                RadialGradient radialGradient = new RadialGradient((float) (f13 + definedBrush.a(r0VarArr[c10], d14, f12, textSize)), (float) ((f14 / d16) + definedBrush.a(r0VarArr[5], d15 / d16, f12, textSize)), (float) a14, iArr2, fArr2, Shader.TileMode.CLAMP);
                Matrix matrix4 = new Matrix();
                matrix4.preScale(1.0f, (float) d16);
                Matrix matrix5 = definedBrush.f6301f;
                if (matrix5 != null) {
                    matrix4.preConcat(matrix5);
                }
                radialGradient.setLocalMatrix(matrix4);
                paint.setShader(radialGradient);
            }
        }
    }

    @Override // com.horcrux.svg.VirtualView
    public void draw(Canvas canvas, Paint paint, float f2) {
        float f10 = f2 * this.mOpacity;
        boolean z5 = this.mPath == null;
        if (z5) {
            Path path = getPath(canvas, paint);
            this.mPath = path;
            path.setFillType(this.fillRule);
        }
        boolean z6 = this.vectorEffect == 1;
        Path path2 = this.mPath;
        if (z6) {
            path2 = new Path();
            this.mPath.transform(this.mCTM, path2);
            canvas.setMatrix(null);
        }
        if (z5 || path2 != this.mPath) {
            RectF rectF = new RectF();
            this.mBox = rectF;
            path2.computeBounds(rectF, true);
        }
        RectF rectF2 = new RectF(this.mBox);
        this.mCTM.mapRect(rectF2);
        setClientRect(rectF2);
        clip(canvas, paint);
        if (setupFillPaint(paint, this.fillOpacity * f10)) {
            if (z5) {
                Path path3 = new Path();
                this.mFillPath = path3;
                paint.getFillPath(path2, path3);
            }
            canvas.drawPath(path2, paint);
        }
        if (setupStrokePaint(paint, this.strokeOpacity * f10)) {
            if (z5) {
                Path path4 = new Path();
                this.mStrokePath = path4;
                paint.getFillPath(path2, path4);
            }
            canvas.drawPath(path2, paint);
        }
        renderMarkers(canvas, paint, f10);
    }

    public int getCurrentColor() {
        int i5 = this.mCurrentColor;
        if (i5 != 0) {
            return i5;
        }
        RenderableView renderableView = this.mCaller;
        if (renderableView != null) {
            return renderableView.getCurrentColor();
        }
        ViewParent parent = getParent();
        if (parent instanceof VirtualView) {
            return ((RenderableView) parent).getCurrentColor();
        }
        if (parent instanceof SvgView) {
            return ((SvgView) parent).mCurrentColor;
        }
        return 0;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, com.facebook.react.touch.ReactHitSlopView
    public Rect getHitSlopRect() {
        if (this.mPointerEvents == PointerEvents.BOX_NONE) {
            return new Rect(Integer.MIN_VALUE, Integer.MIN_VALUE, Integer.MIN_VALUE, Integer.MIN_VALUE);
        }
        return null;
    }

    @Override // com.horcrux.svg.VirtualView
    public abstract Path getPath(Canvas canvas, Paint paint);

    public Region getRegion(Path path, RectF rectF) {
        Region region = new Region();
        region.setPath(path, new Region((int) Math.floor(rectF.left), (int) Math.floor(rectF.top), (int) Math.ceil(rectF.right), (int) Math.ceil(rectF.bottom)));
        return region;
    }

    @Override // com.horcrux.svg.VirtualView
    public int hitTest(float[] fArr) {
        Region region;
        Region region2;
        if (this.mPath == null || !this.mInvertible || this.mPointerEvents == PointerEvents.NONE) {
            return -1;
        }
        float[] fArr2 = new float[2];
        this.mInvMatrix.mapPoints(fArr2, fArr);
        this.mInvTransform.mapPoints(fArr2);
        int round = Math.round(fArr2[0]);
        int round2 = Math.round(fArr2[1]);
        initBounds();
        Region region3 = this.mRegion;
        if ((region3 != null && region3.contains(round, round2)) || ((region = this.mStrokeRegion) != null && (region.contains(round, round2) || ((region2 = this.mMarkerRegion) != null && region2.contains(round, round2))))) {
            if (getClipPath() == null || this.mClipRegion.contains(round, round2)) {
                return getId();
            }
            return -1;
        }
        return -1;
    }

    public void initBounds() {
        if (this.mRegion == null && this.mFillPath != null) {
            RectF rectF = new RectF();
            this.mFillBounds = rectF;
            this.mFillPath.computeBounds(rectF, true);
            this.mRegion = getRegion(this.mFillPath, this.mFillBounds);
        }
        if (this.mRegion == null && this.mPath != null) {
            RectF rectF2 = new RectF();
            this.mFillBounds = rectF2;
            this.mPath.computeBounds(rectF2, true);
            this.mRegion = getRegion(this.mPath, this.mFillBounds);
        }
        if (this.mStrokeRegion == null && this.mStrokePath != null) {
            RectF rectF3 = new RectF();
            this.mStrokeBounds = rectF3;
            this.mStrokePath.computeBounds(rectF3, true);
            this.mStrokeRegion = getRegion(this.mStrokePath, this.mStrokeBounds);
        }
        if (this.mMarkerRegion == null && this.mMarkerPath != null) {
            RectF rectF4 = new RectF();
            this.mMarkerBounds = rectF4;
            this.mMarkerPath.computeBounds(rectF4, true);
            this.mMarkerRegion = getRegion(this.mMarkerPath, this.mMarkerBounds);
        }
        Path clipPath = getClipPath();
        if (clipPath == null || this.mClipRegionPath == clipPath) {
            return;
        }
        this.mClipRegionPath = clipPath;
        RectF rectF5 = new RectF();
        this.mClipBounds = rectF5;
        clipPath.computeBounds(rectF5, true);
        this.mClipRegion = getRegion(clipPath, this.mClipBounds);
    }

    public void mergeProperties(RenderableView renderableView) {
        this.mCaller = renderableView;
        ArrayList<String> attributeList = renderableView.getAttributeList();
        if (attributeList == null || attributeList.size() == 0) {
            return;
        }
        this.mOriginProperties = new ArrayList<>();
        this.mAttributeList = this.mPropList == null ? new ArrayList<>() : new ArrayList<>(this.mPropList);
        int size = attributeList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                String str = attributeList.get(i5);
                Field field = getClass().getField(str);
                Object obj = field.get(renderableView);
                this.mOriginProperties.add(field.get(this));
                if (!hasOwnProperty(str)) {
                    this.mAttributeList.add(str);
                    field.set(this, obj);
                }
            } catch (Exception e9) {
                throw new IllegalStateException(e9);
            }
        }
        this.mLastMergedList = attributeList;
    }

    public void onReceiveNativeEvent() {
        ((RCTEventEmitter) ((ReactContext) getContext()).getJSModule(RCTEventEmitter.class)).receiveEvent(getId(), SvgOnLayoutEvent.EVENT_NAME, Arguments.createMap());
    }

    @Override // com.horcrux.svg.VirtualView
    public void render(Canvas canvas, Paint paint, float f2) {
        RectF rectF;
        v vVar;
        RectF rectF2 = null;
        g0 g0Var = this.mMask != null ? (g0) getSvgView().getDefinedMask(this.mMask) : null;
        v vVar2 = this.mFilter != null ? (v) getSvgView().getDefinedFilter(this.mFilter) : null;
        if (g0Var == null && vVar2 == null) {
            draw(canvas, paint, f2);
            return;
        }
        if (vVar2 != null) {
            Paint paint2 = new Paint(2);
            canvas.saveLayer(null, paint2);
            Bitmap currentBitmap = getSvgView().getCurrentBitmap();
            Bitmap createBitmap = Bitmap.createBitmap(canvas.getWidth(), canvas.getHeight(), Bitmap.Config.ARGB_8888);
            Canvas canvas2 = new Canvas(createBitmap);
            canvas2.setMatrix(canvas.getMatrix());
            draw(canvas2, paint, f2);
            initBounds();
            RectF clientRect = getClientRect();
            if ((this instanceof c0) && clientRect == null) {
                return;
            }
            HashMap hashMap = vVar2.f6432d;
            hashMap.clear();
            hashMap.put("SourceGraphic", createBitmap);
            hashMap.put("SourceAlpha", FilterUtils.applySourceAlphaFilter(createBitmap));
            hashMap.put("BackgroundImage", currentBitmap);
            hashMap.put("BackgroundAlpha", FilterUtils.applySourceAlphaFilter(currentBitmap));
            Bitmap createBitmap2 = Bitmap.createBitmap(createBitmap.getWidth(), createBitmap.getHeight(), createBitmap.getConfig());
            Canvas canvas3 = new Canvas(createBitmap2);
            Rect cropRect = vVar2.f6435v.getCropRect(vVar2, vVar2.f6433e, clientRect);
            int i5 = 0;
            int i6 = 0;
            while (i6 < vVar2.getChildCount()) {
                View childAt = vVar2.getChildAt(i6);
                if (childAt instanceof o) {
                    o oVar = (o) childAt;
                    createBitmap2.eraseColor(i5);
                    FilterRegion filterRegion = oVar.f6405e;
                    u uVar = vVar2.f6434i;
                    vVar = vVar2;
                    Rect cropRect2 = filterRegion.getCropRect(oVar, uVar, uVar == u.USER_SPACE_ON_USE ? new RectF(cropRect) : clientRect);
                    canvas3.drawBitmap(oVar.c(hashMap, createBitmap), cropRect2, cropRect2, (Paint) null);
                    Bitmap copy = createBitmap2.copy(Bitmap.Config.ARGB_8888, true);
                    String str = oVar.f6404d;
                    if (str != null) {
                        hashMap.put(str, copy);
                    }
                    createBitmap = copy;
                } else {
                    vVar = vVar2;
                    Log.e("RNSVG", "Invalid `Filter` child: Filter children can only be `Fe...` components");
                }
                i6++;
                vVar2 = vVar;
                i5 = 0;
            }
            createBitmap2.eraseColor(i5);
            rectF2 = null;
            canvas3.drawBitmap(createBitmap, cropRect, cropRect, (Paint) null);
            int save = canvas.save();
            canvas.setMatrix(null);
            canvas.drawBitmap(createBitmap2, 0.0f, 0.0f, paint2);
            canvas.restoreToCount(save);
        } else {
            canvas.saveLayer(null, new Paint());
            draw(canvas, paint, f2);
        }
        if (g0Var != null) {
            Paint paint3 = new Paint();
            paint3.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.DST_IN));
            canvas.saveLayer(rectF2, paint3);
            if (g0Var.H == 1) {
                Paint paint4 = new Paint();
                paint4.setColorFilter(new ColorMatrixColorFilter(new ColorMatrix(new float[]{0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.2125f, 0.7154f, 0.0721f, 0.0f, 0.0f})));
                canvas.saveLayer(null, paint4);
            } else {
                canvas.saveLayer(null, paint);
            }
            if (g0Var.G == 2) {
                float relativeOnWidth = (float) relativeOnWidth(g0Var.f6355x);
                float relativeOnHeight = (float) relativeOnHeight(g0Var.f6356y);
                rectF = new RectF(relativeOnWidth, relativeOnHeight, ((float) relativeOnWidth(g0Var.E)) + relativeOnWidth, ((float) relativeOnHeight(g0Var.F)) + relativeOnHeight);
            } else {
                RectF clientRect2 = getClientRect();
                if ((this instanceof c0) && clientRect2 == null) {
                    return;
                }
                this.mInvCTM.mapRect(clientRect2);
                float relativeOnFraction = (float) relativeOnFraction(g0Var.f6355x, clientRect2.width());
                float relativeOnFraction2 = (float) relativeOnFraction(g0Var.f6356y, clientRect2.height());
                float relativeOnFraction3 = (float) relativeOnFraction(g0Var.E, clientRect2.width());
                float relativeOnFraction4 = (float) relativeOnFraction(g0Var.F, clientRect2.height());
                float f10 = clientRect2.left + relativeOnFraction;
                float f11 = clientRect2.top + relativeOnFraction2;
                rectF = new RectF(f10, f11, relativeOnFraction3 + f10, relativeOnFraction4 + f11);
            }
            canvas.clipRect(rectF);
            g0Var.draw(canvas, paint, 1.0f);
            canvas.restore();
            canvas.saveLayer(null, paint3);
            canvas.clipRect(rectF);
            g0Var.draw(canvas, paint, 1.0f);
            canvas.restore();
            canvas.restore();
        }
        canvas.restore();
    }

    /* JADX WARN: Code restructure failed: missing block: B:53:0x00fa, code lost:
    
        if (com.horcrux.svg.m0.b(r7) != false) goto L34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x00fc, code lost:
    
        r7 = r10;
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0123, code lost:
    
        if (com.horcrux.svg.m0.b(r7) != false) goto L34;
     */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0132  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0158  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0161  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x014d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void renderMarkers(Canvas canvas, Paint paint, float f2) {
        char c6;
        int i5;
        int i6;
        f0 f0Var;
        Iterator it;
        f0 f0Var2;
        char c8;
        k0 k0Var;
        int i10;
        k0 c10;
        k0 c11;
        k0 c12;
        k0 k0Var2;
        k0 k0Var3;
        k0 k0Var4;
        int i11;
        f0 f0Var3;
        long j;
        f0 f0Var4 = (f0) getSvgView().getDefinedMarker(this.mMarkerStart);
        f0 f0Var5 = (f0) getSvgView().getDefinedMarker(this.mMarkerMid);
        f0 f0Var6 = (f0) getSvgView().getDefinedMarker(this.mMarkerEnd);
        ArrayList<h0> arrayList = this.elements;
        if (arrayList != null) {
            if (f0Var4 == null && f0Var5 == null && f0Var6 == null) {
                return;
            }
            contextElement = this;
            m0.f6386d = new ArrayList();
            boolean z5 = false;
            m0.f6387e = 0;
            m0.f6388f = new k0(0.0d, 0.0d);
            m0.f6389g = new k0(0.0d, 0.0d);
            Iterator<h0> it2 = arrayList.iterator();
            while (true) {
                c6 = 4;
                if (!it2.hasNext()) {
                    break;
                }
                h0 next = it2.next();
                boolean z6 = z5;
                k0[] k0VarArr = next.f6365b;
                k0 k0Var5 = null;
                int i12 = next.a;
                int b10 = f0.e.b(i12);
                if (b10 != 0) {
                    if (b10 == 1) {
                        k0 k0Var6 = k0VarArr[1];
                        k0 k0Var7 = m0.f6388f;
                        k0 k0Var8 = k0VarArr[z6 ? 1 : 0];
                        k0 c13 = m0.c(k0Var8, k0Var7);
                        k0 c14 = m0.c(k0Var6, k0Var8);
                        if (m0.b(c13)) {
                            c13 = c14;
                        } else if (m0.b(c14)) {
                            c14 = c13;
                        }
                        k0 k0Var9 = c13;
                        k0Var2 = c14;
                        k0Var3 = k0Var6;
                        k0Var4 = k0Var9;
                    } else if (b10 == 2 || b10 == 3) {
                        k0Var3 = k0VarArr[z6 ? 1 : 0];
                        k0Var4 = m0.c(k0Var3, m0.f6388f);
                        k0Var2 = m0.c(k0Var3, m0.f6388f);
                    } else if (b10 != 4) {
                        i10 = 2;
                        k0Var = null;
                        c10 = null;
                        k0Var3 = k0Var;
                        k0Var2 = c10;
                        k0Var4 = k0Var5;
                        m0.f6391i = k0Var4;
                        i11 = m0.f6387e;
                        if (i11 > 0) {
                            int i13 = i11 == 1 ? 1 : i10;
                            f0Var3 = f0Var4;
                            m0.f6386d.add(new m0(i13, m0.f6388f, m0.a(i13)));
                        } else {
                            f0Var3 = f0Var4;
                        }
                        m0.f6390h = k0Var2;
                        m0.f6388f = k0Var3;
                        if (i12 == 3) {
                            m0.f6389g = next.f6365b[z6 ? 1 : 0];
                        } else if (i12 == 5) {
                            j = 0;
                            m0.f6389g = new k0(0.0d, 0.0d);
                            m0.f6387e++;
                            z5 = z6 ? 1 : 0;
                            f0Var4 = f0Var3;
                        }
                        j = 0;
                        m0.f6387e++;
                        z5 = z6 ? 1 : 0;
                        f0Var4 = f0Var3;
                    } else {
                        k0Var3 = m0.f6389g;
                        k0Var4 = m0.c(k0Var3, m0.f6388f);
                        k0Var2 = m0.c(k0Var3, m0.f6388f);
                    }
                    i10 = 2;
                    m0.f6391i = k0Var4;
                    i11 = m0.f6387e;
                    if (i11 > 0) {
                    }
                    m0.f6390h = k0Var2;
                    m0.f6388f = k0Var3;
                    if (i12 == 3) {
                    }
                    j = 0;
                    m0.f6387e++;
                    z5 = z6 ? 1 : 0;
                    f0Var4 = f0Var3;
                } else {
                    k0Var = k0VarArr[2];
                    k0 c15 = m0.c(k0VarArr[z6 ? 1 : 0], m0.f6388f);
                    i10 = 2;
                    c10 = m0.c(k0VarArr[2], k0VarArr[1]);
                    if (m0.b(c15)) {
                        k0 k0Var10 = k0VarArr[z6 ? 1 : 0];
                        k0 k0Var11 = k0VarArr[1];
                        k0 k0Var12 = k0VarArr[2];
                        c11 = m0.c(k0Var11, k0Var10);
                        c12 = m0.c(k0Var12, k0Var11);
                        if (!m0.b(c11)) {
                        }
                        c11 = c12;
                        k0 k0Var13 = c11;
                        k0Var2 = c12;
                        k0Var3 = k0Var;
                        k0Var4 = k0Var13;
                    } else if (m0.b(c10)) {
                        k0 k0Var14 = m0.f6388f;
                        k0 k0Var15 = k0VarArr[z6 ? 1 : 0];
                        k0 k0Var16 = k0VarArr[1];
                        c11 = m0.c(k0Var15, k0Var14);
                        c12 = m0.c(k0Var16, k0Var15);
                        if (!m0.b(c11)) {
                        }
                        c11 = c12;
                        k0 k0Var132 = c11;
                        k0Var2 = c12;
                        k0Var3 = k0Var;
                        k0Var4 = k0Var132;
                    } else {
                        k0Var5 = c15;
                        k0Var3 = k0Var;
                        k0Var2 = c10;
                        k0Var4 = k0Var5;
                    }
                    m0.f6391i = k0Var4;
                    i11 = m0.f6387e;
                    if (i11 > 0) {
                    }
                    m0.f6390h = k0Var2;
                    m0.f6388f = k0Var3;
                    if (i12 == 3) {
                    }
                    j = 0;
                    m0.f6387e++;
                    z5 = z6 ? 1 : 0;
                    f0Var4 = f0Var3;
                }
            }
            f0 f0Var7 = f0Var4;
            boolean z7 = z5;
            int i14 = 1;
            int i15 = 2;
            m0.f6386d.add(new m0(3, m0.f6388f, m0.a(3)));
            ArrayList arrayList2 = m0.f6386d;
            r0 r0Var = this.strokeWidth;
            float relativeOnOther = (float) (r0Var != null ? relativeOnOther(r0Var) : 1.0d);
            this.mMarkerPath = new Path();
            Iterator it3 = arrayList2.iterator();
            while (it3.hasNext()) {
                m0 m0Var = (m0) it3.next();
                int b11 = f0.e.b(m0Var.a);
                if (b11 != 0) {
                    i6 = i14;
                    if (b11 != i6) {
                        i5 = i15;
                        f0Var = b11 != i5 ? null : f0Var6;
                    } else {
                        i5 = i15;
                        f0Var = f0Var5;
                    }
                } else {
                    i5 = i15;
                    i6 = i14;
                    f0Var = f0Var7;
                }
                if (f0Var == null) {
                    i14 = i6;
                    i15 = i5;
                } else {
                    Matrix matrix = f0Var.O;
                    int saveAndSetupCanvas = f0Var.saveAndSetupCanvas(canvas, f0Var.mCTM);
                    matrix.reset();
                    k0 k0Var17 = m0Var.f6392b;
                    matrix.setTranslate((float) k0Var17.a, (float) k0Var17.f6381b);
                    double parseDouble = "auto".equals(f0Var.H) ? -1.0d : Double.parseDouble(f0Var.H);
                    if (parseDouble == -1.0d) {
                        parseDouble = m0Var.f6393c;
                    }
                    matrix.preRotate(((float) parseDouble) + 180.0f);
                    if ("strokeWidth".equals(f0Var.G)) {
                        float f10 = relativeOnOther / f0Var.mScale;
                        matrix.preScale(f10, f10);
                    }
                    RectF rectF = new RectF(0.0f, 0.0f, (float) f0Var.relativeOnWidth(f0Var.E), (float) f0Var.relativeOnHeight(f0Var.F));
                    if (f0Var.M != null) {
                        float f11 = f0Var.I;
                        float f12 = f0Var.mScale;
                        c8 = c6;
                        float f13 = f0Var.J;
                        it = it3;
                        f0Var2 = f0Var5;
                        float[] fArr = new float[9];
                        io.sentry.config.a.t(new RectF(f11 * f12, f13 * f12, (f11 + f0Var.K) * f12, (f13 + f0Var.L) * f12), rectF, f0Var.M, f0Var.N).getValues(fArr);
                        matrix.preScale(fArr[z7 ? 1 : 0], fArr[c8]);
                    } else {
                        it = it3;
                        f0Var2 = f0Var5;
                        c8 = c6;
                    }
                    matrix.preTranslate((float) (-f0Var.relativeOnWidth(f0Var.f6347x)), (float) (-f0Var.relativeOnHeight(f0Var.f6348y)));
                    canvas.concat(matrix);
                    f0Var.c(canvas, paint, f2);
                    f0Var.restoreCanvas(canvas, saveAndSetupCanvas);
                    this.mMarkerPath.addPath(f0Var.getPath(canvas, paint), matrix);
                    c6 = c8;
                    it3 = it;
                    f0Var5 = f0Var2;
                    i15 = 2;
                    i14 = 1;
                }
            }
            contextElement = null;
        }
    }

    public void resetProperties() {
        ArrayList<String> arrayList = this.mLastMergedList;
        if (arrayList == null || this.mOriginProperties == null) {
            return;
        }
        try {
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                getClass().getField(this.mLastMergedList.get(size)).set(this, this.mOriginProperties.get(size));
            }
            this.mLastMergedList = null;
            this.mOriginProperties = null;
            this.mAttributeList = this.mPropList;
            this.mCaller = null;
        } catch (Exception e9) {
            throw new IllegalStateException(e9);
        }
    }

    public void setCurrentColor(Integer num) {
        this.mCurrentColor = num != null ? num.intValue() : 0;
        invalidate();
        clearChildCache();
    }

    public void setFill(Dynamic dynamic) {
        if (dynamic == null || dynamic.isNull()) {
            this.fill = null;
            invalidate();
            return;
        }
        ReadableType type = dynamic.getType();
        if (type.equals(ReadableType.Map)) {
            setFill(dynamic.asMap());
            return;
        }
        int i5 = 0;
        if (type.equals(ReadableType.Number)) {
            this.fill = JavaOnlyArray.of(0, Integer.valueOf(dynamic.asInt()));
        } else if (type.equals(ReadableType.Array)) {
            this.fill = dynamic.asArray();
        } else {
            JavaOnlyArray javaOnlyArray = new JavaOnlyArray();
            javaOnlyArray.pushInt(0);
            Matcher matcher = regex.matcher(dynamic.asString());
            while (matcher.find()) {
                double parseDouble = Double.parseDouble(matcher.group());
                int i6 = i5 + 1;
                if (i5 < 3) {
                    parseDouble /= 255.0d;
                }
                javaOnlyArray.pushDouble(parseDouble);
                i5 = i6;
            }
            this.fill = javaOnlyArray;
        }
        invalidate();
    }

    public void setFillOpacity(float f2) {
        this.fillOpacity = f2;
        invalidate();
    }

    public void setFillRule(int i5) {
        if (i5 == 0) {
            this.fillRule = Path.FillType.EVEN_ODD;
        } else if (i5 != 1) {
            throw new JSApplicationIllegalArgumentException(s4.h.e(i5, "fillRule ", " unrecognized"));
        }
        invalidate();
    }

    public void setFilter(String str) {
        this.mFilter = str;
        invalidate();
    }

    @Override // android.view.View
    public void setId(int i5) {
        super.setId(i5);
        VirtualViewManager.setRenderableView(i5, this);
    }

    public void setPropList(ReadableArray readableArray) {
        if (readableArray != null) {
            ArrayList<String> arrayList = new ArrayList<>();
            this.mAttributeList = arrayList;
            this.mPropList = arrayList;
            for (int i5 = 0; i5 < readableArray.size(); i5++) {
                this.mPropList.add(readableArray.getString(i5));
            }
        }
        invalidate();
    }

    public void setStroke(Dynamic dynamic) {
        if (dynamic == null || dynamic.isNull()) {
            this.stroke = null;
            invalidate();
            return;
        }
        if (dynamic.getType().equals(ReadableType.Map)) {
            setStroke(dynamic.asMap());
            return;
        }
        ReadableType type = dynamic.getType();
        int i5 = 0;
        if (type.equals(ReadableType.Number)) {
            this.stroke = JavaOnlyArray.of(0, Integer.valueOf(dynamic.asInt()));
        } else if (type.equals(ReadableType.Array)) {
            this.stroke = dynamic.asArray();
        } else {
            JavaOnlyArray javaOnlyArray = new JavaOnlyArray();
            javaOnlyArray.pushInt(0);
            Matcher matcher = regex.matcher(dynamic.asString());
            while (matcher.find()) {
                double parseDouble = Double.parseDouble(matcher.group());
                int i6 = i5 + 1;
                if (i5 < 3) {
                    parseDouble /= 255.0d;
                }
                javaOnlyArray.pushDouble(parseDouble);
                i5 = i6;
            }
            this.stroke = javaOnlyArray;
        }
        invalidate();
    }

    public void setStrokeDasharray(Dynamic dynamic) {
        ArrayList a = r0.a(dynamic);
        if (a != null) {
            if (a.size() % 2 == 1) {
                a.addAll(a);
            }
            this.strokeDasharray = (r0[]) a.toArray(new r0[0]);
        } else {
            this.strokeDasharray = null;
        }
        invalidate();
    }

    public void setStrokeDashoffset(float f2) {
        this.strokeDashoffset = f2 * this.mScale;
        invalidate();
    }

    public void setStrokeLinecap(int i5) {
        if (i5 == 0) {
            this.strokeLinecap = Paint.Cap.BUTT;
        } else if (i5 == 1) {
            this.strokeLinecap = Paint.Cap.ROUND;
        } else {
            if (i5 != 2) {
                throw new JSApplicationIllegalArgumentException(s4.h.e(i5, "strokeLinecap ", " unrecognized"));
            }
            this.strokeLinecap = Paint.Cap.SQUARE;
        }
        invalidate();
    }

    public void setStrokeLinejoin(int i5) {
        if (i5 == 0) {
            this.strokeLinejoin = Paint.Join.MITER;
        } else if (i5 == 1) {
            this.strokeLinejoin = Paint.Join.ROUND;
        } else {
            if (i5 != 2) {
                throw new JSApplicationIllegalArgumentException(s4.h.e(i5, "strokeLinejoin ", " unrecognized"));
            }
            this.strokeLinejoin = Paint.Join.BEVEL;
        }
        invalidate();
    }

    public void setStrokeMiterlimit(float f2) {
        this.strokeMiterlimit = f2;
        invalidate();
    }

    public void setStrokeOpacity(float f2) {
        this.strokeOpacity = f2;
        invalidate();
    }

    public void setStrokeWidth(Dynamic dynamic) {
        this.strokeWidth = dynamic.isNull() ? new r0(1.0d) : r0.b(dynamic);
        invalidate();
    }

    public void setVectorEffect(int i5) {
        this.vectorEffect = i5;
        invalidate();
    }

    public boolean setupFillPaint(Paint paint, float f2) {
        ReadableArray readableArray = this.fill;
        if (readableArray == null || readableArray.size() <= 0) {
            return false;
        }
        paint.reset();
        paint.setFlags(385);
        paint.setStyle(Paint.Style.FILL);
        setupPaint(paint, f2, this.fill);
        return true;
    }

    public boolean setupStrokePaint(Paint paint, float f2) {
        ReadableArray readableArray;
        paint.reset();
        double relativeOnOther = relativeOnOther(this.strokeWidth);
        if (relativeOnOther == 0.0d || (readableArray = this.stroke) == null || readableArray.size() == 0) {
            return false;
        }
        paint.setFlags(385);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeCap(this.strokeLinecap);
        paint.setStrokeJoin(this.strokeLinejoin);
        paint.setStrokeMiter(this.strokeMiterlimit * this.mScale);
        paint.setStrokeWidth((float) relativeOnOther);
        setupPaint(paint, f2, this.stroke);
        r0[] r0VarArr = this.strokeDasharray;
        if (r0VarArr == null) {
            return true;
        }
        int length = r0VarArr.length;
        float[] fArr = new float[length];
        for (int i5 = 0; i5 < length; i5++) {
            fArr[i5] = (float) relativeOnOther(this.strokeDasharray[i5]);
        }
        paint.setPathEffect(new DashPathEffect(fArr, this.strokeDashoffset));
        return true;
    }

    public void setFill(ReadableMap readableMap) {
        if (readableMap == null) {
            this.fill = null;
            invalidate();
            return;
        }
        int i5 = readableMap.getInt("type");
        if (i5 == 0) {
            ReadableType type = readableMap.getType("payload");
            if (type.equals(ReadableType.Number)) {
                this.fill = JavaOnlyArray.of(0, Integer.valueOf(readableMap.getInt("payload")));
            } else if (type.equals(ReadableType.Map)) {
                this.fill = JavaOnlyArray.of(0, readableMap.getMap("payload"));
            }
        } else if (i5 == 1) {
            this.fill = JavaOnlyArray.of(1, readableMap.getString("brushRef"));
        } else {
            this.fill = JavaOnlyArray.of(Integer.valueOf(i5));
        }
        invalidate();
    }

    public void setStroke(ReadableMap readableMap) {
        if (readableMap == null) {
            this.stroke = null;
            invalidate();
            return;
        }
        int i5 = readableMap.getInt("type");
        if (i5 == 0) {
            ReadableType type = readableMap.getType("payload");
            if (type.equals(ReadableType.Number)) {
                this.stroke = JavaOnlyArray.of(0, Integer.valueOf(readableMap.getInt("payload")));
            } else if (type.equals(ReadableType.Map)) {
                this.stroke = JavaOnlyArray.of(0, readableMap.getMap("payload"));
            }
        } else if (i5 == 1) {
            this.stroke = JavaOnlyArray.of(1, readableMap.getString("brushRef"));
        } else {
            this.stroke = JavaOnlyArray.of(Integer.valueOf(i5));
        }
        invalidate();
    }
}
