package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.Resources;
import android.graphics.RectF;
import android.os.Build;
import android.text.Layout;
import android.text.StaticLayout;
import android.text.TextPaint;
import android.text.method.TransformationMethod;
import android.util.Log;
import android.util.TypedValue;
import android.widget.TextView;
import com.discord.key_commands.KeyCommandDescriptor;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes.dex */
public final class g1 {

    /* renamed from: l, reason: collision with root package name */
    public static final RectF f981l = new RectF();

    /* renamed from: m, reason: collision with root package name */
    public static final ConcurrentHashMap f982m = new ConcurrentHashMap();
    public int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public boolean f983b = false;

    /* renamed from: c, reason: collision with root package name */
    public float f984c = -1.0f;

    /* renamed from: d, reason: collision with root package name */
    public float f985d = -1.0f;

    /* renamed from: e, reason: collision with root package name */
    public float f986e = -1.0f;

    /* renamed from: f, reason: collision with root package name */
    public int[] f987f = new int[0];

    /* renamed from: g, reason: collision with root package name */
    public boolean f988g = false;

    /* renamed from: h, reason: collision with root package name */
    public TextPaint f989h;

    /* renamed from: i, reason: collision with root package name */
    public final TextView f990i;
    public final Context j;
    public final d1 k;

    public g1(TextView textView) {
        this.f990i = textView;
        this.j = textView.getContext();
        if (Build.VERSION.SDK_INT >= 29) {
            this.k = new e1();
        } else {
            this.k = new d1();
        }
    }

    public static int[] b(int[] iArr) {
        int length = iArr.length;
        if (length != 0) {
            Arrays.sort(iArr);
            ArrayList arrayList = new ArrayList();
            for (int i5 : iArr) {
                if (i5 > 0 && Collections.binarySearch(arrayList, Integer.valueOf(i5)) < 0) {
                    arrayList.add(Integer.valueOf(i5));
                }
            }
            if (length != arrayList.size()) {
                int size = arrayList.size();
                int[] iArr2 = new int[size];
                for (int i6 = 0; i6 < size; i6++) {
                    iArr2[i6] = ((Integer) arrayList.get(i6)).intValue();
                }
                return iArr2;
            }
        }
        return iArr;
    }

    public static Method d(String str) {
        try {
            ConcurrentHashMap concurrentHashMap = f982m;
            Method method = (Method) concurrentHashMap.get(str);
            if (method != null || (method = TextView.class.getDeclaredMethod(str, null)) == null) {
                return method;
            }
            method.setAccessible(true);
            concurrentHashMap.put(str, method);
            return method;
        } catch (Exception e9) {
            Log.w("ACTVAutoSizeHelper", "Failed to retrieve TextView#" + str + "() method", e9);
            return null;
        }
    }

    public static Object e(String str, Object obj, Object obj2) {
        try {
            return d(str).invoke(obj, null);
        } catch (Exception e9) {
            Log.w("ACTVAutoSizeHelper", "Failed to invoke TextView#" + str + "() method", e9);
            return obj2;
        }
    }

    public final void a() {
        if (f()) {
            if (this.f983b) {
                if (this.f990i.getMeasuredHeight() <= 0 || this.f990i.getMeasuredWidth() <= 0) {
                    return;
                }
                int measuredWidth = this.k.b(this.f990i) ? KeyCommandDescriptor.ModifierFlags.COMMAND : (this.f990i.getMeasuredWidth() - this.f990i.getTotalPaddingLeft()) - this.f990i.getTotalPaddingRight();
                int height = (this.f990i.getHeight() - this.f990i.getCompoundPaddingBottom()) - this.f990i.getCompoundPaddingTop();
                if (measuredWidth <= 0 || height <= 0) {
                    return;
                }
                RectF rectF = f981l;
                synchronized (rectF) {
                    try {
                        rectF.setEmpty();
                        rectF.right = measuredWidth;
                        rectF.bottom = height;
                        float c6 = c(rectF);
                        if (c6 != this.f990i.getTextSize()) {
                            g(c6, 0);
                        }
                    } finally {
                    }
                }
            }
            this.f983b = true;
        }
    }

    public final int c(RectF rectF) {
        CharSequence transformation;
        int length = this.f987f.length;
        if (length == 0) {
            throw new IllegalStateException("No available text sizes to choose from.");
        }
        int i5 = length - 1;
        int i6 = 0;
        int i10 = 1;
        while (i10 <= i5) {
            int i11 = (i10 + i5) / 2;
            int i12 = this.f987f[i11];
            TextView textView = this.f990i;
            CharSequence text = textView.getText();
            TransformationMethod transformationMethod = textView.getTransformationMethod();
            CharSequence charSequence = (transformationMethod == null || (transformation = transformationMethod.getTransformation(text, textView)) == null) ? text : transformation;
            int maxLines = textView.getMaxLines();
            TextPaint textPaint = this.f989h;
            if (textPaint == null) {
                this.f989h = new TextPaint();
            } else {
                textPaint.reset();
            }
            this.f989h.set(textView.getPaint());
            this.f989h.setTextSize(i12);
            StaticLayout a = c1.a(charSequence, (Layout.Alignment) e("getLayoutAlignment", textView, Layout.Alignment.ALIGN_NORMAL), Math.round(rectF.right), maxLines, this.f990i, this.f989h, this.k);
            if ((maxLines == -1 || (a.getLineCount() <= maxLines && a.getLineEnd(a.getLineCount() - 1) == charSequence.length())) && a.getHeight() <= rectF.bottom) {
                int i13 = i11 + 1;
                i6 = i10;
                i10 = i13;
            } else {
                i6 = i11 - 1;
                i5 = i6;
            }
        }
        return this.f987f[i6];
    }

    public final boolean f() {
        return j() && this.a != 0;
    }

    public final void g(float f2, int i5) {
        Context context = this.j;
        float applyDimension = TypedValue.applyDimension(i5, f2, (context == null ? Resources.getSystem() : context.getResources()).getDisplayMetrics());
        TextView textView = this.f990i;
        if (applyDimension != textView.getPaint().getTextSize()) {
            textView.getPaint().setTextSize(applyDimension);
            boolean isInLayout = textView.isInLayout();
            if (textView.getLayout() != null) {
                this.f983b = false;
                try {
                    Method d6 = d("nullLayouts");
                    if (d6 != null) {
                        d6.invoke(textView, null);
                    }
                } catch (Exception e9) {
                    Log.w("ACTVAutoSizeHelper", "Failed to invoke TextView#nullLayouts() method", e9);
                }
                if (isInLayout) {
                    textView.forceLayout();
                } else {
                    textView.requestLayout();
                }
                textView.invalidate();
            }
        }
    }

    public final boolean h() {
        if (j() && this.a == 1) {
            if (!this.f988g || this.f987f.length == 0) {
                int floor = ((int) Math.floor((this.f986e - this.f985d) / this.f984c)) + 1;
                int[] iArr = new int[floor];
                for (int i5 = 0; i5 < floor; i5++) {
                    iArr[i5] = Math.round((i5 * this.f984c) + this.f985d);
                }
                this.f987f = b(iArr);
            }
            this.f983b = true;
        } else {
            this.f983b = false;
        }
        return this.f983b;
    }

    public final boolean i() {
        boolean z5 = this.f987f.length > 0;
        this.f988g = z5;
        if (z5) {
            this.a = 1;
            this.f985d = r0[0];
            this.f986e = r0[r1 - 1];
            this.f984c = -1.0f;
        }
        return z5;
    }

    public final boolean j() {
        return !(this.f990i instanceof AppCompatEditText);
    }

    public final void k(float f2, float f10, float f11) {
        if (f2 <= 0.0f) {
            throw new IllegalArgumentException("Minimum auto-size text size (" + f2 + "px) is less or equal to (0px)");
        }
        if (f10 <= f2) {
            throw new IllegalArgumentException("Maximum auto-size text size (" + f10 + "px) is less or equal to minimum auto-size text size (" + f2 + "px)");
        }
        if (f11 <= 0.0f) {
            throw new IllegalArgumentException("The auto-size step granularity (" + f11 + "px) is less or equal to (0px)");
        }
        this.a = 1;
        this.f985d = f2;
        this.f986e = f10;
        this.f984c = f11;
        this.f988g = false;
    }
}
