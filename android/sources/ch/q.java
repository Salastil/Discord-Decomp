package ch;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.TypedValue;
import android.view.View;
import android.widget.TextView;
import androidx.core.view.j0;
import androidx.core.view.s0;
import com.discord.R;
import com.google.android.material.appbar.MaterialToolbar;
import java.util.ArrayList;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public abstract class q {
    public static final int[] a = {R.attr.colorPrimary};

    /* renamed from: b, reason: collision with root package name */
    public static final int[] f3561b = {R.attr.colorPrimaryVariant};

    /* renamed from: c, reason: collision with root package name */
    public static final bg.s f3562c = new bg.s(1);

    public static void a(Context context, AttributeSet attributeSet, int i5, int i6) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.P, i5, i6);
        boolean z5 = obtainStyledAttributes.getBoolean(1, false);
        obtainStyledAttributes.recycle();
        if (z5) {
            TypedValue typedValue = new TypedValue();
            if (!context.getTheme().resolveAttribute(R.attr.isMaterialTheme, typedValue, true) || (typedValue.type == 18 && typedValue.data == 0)) {
                c(context, f3561b, "Theme.MaterialComponents");
            }
        }
        c(context, a, "Theme.AppCompat");
    }

    /* JADX WARN: Code restructure failed: missing block: B:9:0x001b, code lost:
    
        if (r0.getResourceId(0, -1) != (-1)) goto L10;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void b(Context context, AttributeSet attributeSet, int[] iArr, int i5, int i6, int... iArr2) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, lg.a.P, i5, i6);
        boolean z5 = false;
        if (!obtainStyledAttributes.getBoolean(2, false)) {
            obtainStyledAttributes.recycle();
            return;
        }
        if (iArr2.length != 0) {
            TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(attributeSet, iArr, i5, i6);
            for (int i10 : iArr2) {
                if (obtainStyledAttributes2.getResourceId(i10, -1) == -1) {
                    obtainStyledAttributes2.recycle();
                    break;
                }
            }
            obtainStyledAttributes2.recycle();
            z5 = true;
            obtainStyledAttributes.recycle();
            if (!z5) {
                throw new IllegalArgumentException("This component requires that you specify a valid TextAppearance attribute. Update your app theme to inherit from Theme.MaterialComponents (or a descendant).");
            }
        }
    }

    public static void c(Context context, int[] iArr, String str) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(iArr);
        for (int i5 = 0; i5 < iArr.length; i5++) {
            if (!obtainStyledAttributes.hasValue(i5)) {
                obtainStyledAttributes.recycle();
                throw new IllegalArgumentException(s4.h.f("The style on this component requires your app theme to be ", str, " (or a descendant)."));
            }
        }
        obtainStyledAttributes.recycle();
    }

    public static void d(View view, t tVar) {
        int paddingStart = view.getPaddingStart();
        int paddingTop = view.getPaddingTop();
        int paddingEnd = view.getPaddingEnd();
        int paddingBottom = view.getPaddingBottom();
        u uVar = new u();
        uVar.f3566b = paddingStart;
        uVar.f3567c = paddingTop;
        uVar.f3568d = paddingEnd;
        uVar.f3569e = paddingBottom;
        r rVar = new r(tVar, uVar);
        WeakHashMap weakHashMap = s0.a;
        j0.m(view, rVar);
        if (view.isAttachedToWindow()) {
            view.requestApplyInsets();
        } else {
            view.addOnAttachStateChangeListener(new s(0));
        }
    }

    public static ArrayList e(MaterialToolbar materialToolbar, CharSequence charSequence) {
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < materialToolbar.getChildCount(); i5++) {
            View childAt = materialToolbar.getChildAt(i5);
            if (childAt instanceof TextView) {
                TextView textView = (TextView) childAt;
                if (TextUtils.equals(textView.getText(), charSequence)) {
                    arrayList.add(textView);
                }
            }
        }
        return arrayList;
    }

    public static TypedArray f(Context context, AttributeSet attributeSet, int[] iArr, int i5, int i6, int... iArr2) {
        a(context, attributeSet, i5, i6);
        b(context, attributeSet, iArr, i5, i6, iArr2);
        return context.obtainStyledAttributes(attributeSet, iArr, i5, i6);
    }

    public static e4.m g(Context context, AttributeSet attributeSet, int[] iArr, int i5, int i6, int... iArr2) {
        a(context, attributeSet, i5, i6);
        b(context, attributeSet, iArr, i5, i6, iArr2);
        return new e4.m(context, context.obtainStyledAttributes(attributeSet, iArr, i5, i6));
    }

    public static PorterDuff.Mode h(int i5, PorterDuff.Mode mode) {
        if (i5 == 3) {
            return PorterDuff.Mode.SRC_OVER;
        }
        if (i5 == 5) {
            return PorterDuff.Mode.SRC_IN;
        }
        if (i5 == 9) {
            return PorterDuff.Mode.SRC_ATOP;
        }
        switch (i5) {
            case 14:
                return PorterDuff.Mode.MULTIPLY;
            case 15:
                return PorterDuff.Mode.SCREEN;
            case 16:
                return PorterDuff.Mode.ADD;
            default:
                return mode;
        }
    }
}
