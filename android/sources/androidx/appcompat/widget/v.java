package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.PorterDuff;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.widget.CompoundButton;
import android.widget.TextView;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class v {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public Object f1126b;

    /* renamed from: c, reason: collision with root package name */
    public Enum f1127c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f1128d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f1129e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f1130f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f1131g;

    public /* synthetic */ v(int i5, TextView textView) {
        this.a = i5;
        this.f1126b = null;
        this.f1127c = null;
        this.f1128d = false;
        this.f1129e = false;
        this.f1131g = textView;
    }

    public void a() {
        CompoundButton compoundButton = (CompoundButton) this.f1131g;
        Drawable buttonDrawable = compoundButton.getButtonDrawable();
        if (buttonDrawable != null) {
            if (this.f1128d || this.f1129e) {
                Drawable mutate = buttonDrawable.mutate();
                if (this.f1128d) {
                    mutate.setTintList((ColorStateList) this.f1126b);
                }
                if (this.f1129e) {
                    mutate.setTintMode((PorterDuff.Mode) this.f1127c);
                }
                if (mutate.isStateful()) {
                    mutate.setState(compoundButton.getDrawableState());
                }
                compoundButton.setButtonDrawable(mutate);
            }
        }
    }

    public void b() {
        u uVar = (u) this.f1131g;
        Drawable checkMarkDrawable = uVar.getCheckMarkDrawable();
        if (checkMarkDrawable != null) {
            if (this.f1128d || this.f1129e) {
                Drawable mutate = checkMarkDrawable.mutate();
                if (this.f1128d) {
                    mutate.setTintList((ColorStateList) this.f1126b);
                }
                if (this.f1129e) {
                    mutate.setTintMode((PorterDuff.Mode) this.f1127c);
                }
                if (mutate.isStateful()) {
                    mutate.setState(uVar.getDrawableState());
                }
                uVar.setCheckMarkDrawable(mutate);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x005d A[Catch: all -> 0x003c, TryCatch #1 {all -> 0x003c, blocks: (B:3:0x0023, B:5:0x002a, B:8:0x0030, B:9:0x0056, B:11:0x005d, B:12:0x0064, B:14:0x006b, B:21:0x003f, B:23:0x0045, B:25:0x004b), top: B:2:0x0023 }] */
    /* JADX WARN: Removed duplicated region for block: B:14:0x006b A[Catch: all -> 0x003c, TRY_LEAVE, TryCatch #1 {all -> 0x003c, blocks: (B:3:0x0023, B:5:0x002a, B:8:0x0030, B:9:0x0056, B:11:0x005d, B:12:0x0064, B:14:0x006b, B:21:0x003f, B:23:0x0045, B:25:0x004b), top: B:2:0x0023 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void c(AttributeSet attributeSet, int i5) {
        int resourceId;
        int resourceId2;
        CompoundButton compoundButton = (CompoundButton) this.f1131g;
        Context context = compoundButton.getContext();
        int[] iArr = h.a.f9455m;
        e4.m b02 = e4.m.b0(context, attributeSet, iArr, i5);
        TypedArray typedArray = (TypedArray) b02.f7964i;
        androidx.core.view.s0.o(compoundButton, compoundButton.getContext(), iArr, attributeSet, (TypedArray) b02.f7964i, i5, 0);
        try {
            if (typedArray.hasValue(1) && (resourceId2 = typedArray.getResourceId(1, 0)) != 0) {
                try {
                    compoundButton.setButtonDrawable(ys.d.J(compoundButton.getContext(), resourceId2));
                } catch (Resources.NotFoundException unused) {
                }
                if (typedArray.hasValue(2)) {
                    compoundButton.setButtonTintList(b02.T(2));
                }
                if (typedArray.hasValue(3)) {
                    compoundButton.setButtonTintMode(n1.c(typedArray.getInt(3, -1), null));
                }
                b02.e0();
            }
            if (typedArray.hasValue(0) && (resourceId = typedArray.getResourceId(0, 0)) != 0) {
                compoundButton.setButtonDrawable(ys.d.J(compoundButton.getContext(), resourceId));
            }
            if (typedArray.hasValue(2)) {
            }
            if (typedArray.hasValue(3)) {
            }
            b02.e0();
        } catch (Throwable th2) {
            b02.e0();
            throw th2;
        }
    }

    public String toString() {
        switch (this.a) {
            case 2:
                return "JsonConfiguration(encodeDefaults=false, ignoreUnknownKeys=" + this.f1128d + ", isLenient=false, allowStructuredMapKeys=false, prettyPrint=false, explicitNulls=" + this.f1129e + ", prettyPrintIndent='" + ((String) this.f1131g) + "', coerceInputValues=false, useArrayPolymorphism=false, classDiscriminator='" + ((String) this.f1126b) + "', allowSpecialFloatingPointValues=false, useAlternativeNames=" + this.f1130f + ", namingStrategy=null, decodeEnumsCaseInsensitive=false, allowTrailingComma=false, allowComments=false, classDiscriminatorMode=" + ((cs.a) this.f1127c) + ')';
            default:
                return super.toString();
        }
    }

    public v(boolean z5, boolean z6, String prettyPrintIndent, String classDiscriminator, boolean z7, cs.a classDiscriminatorMode) {
        this.a = 2;
        Intrinsics.checkNotNullParameter(prettyPrintIndent, "prettyPrintIndent");
        Intrinsics.checkNotNullParameter(classDiscriminator, "classDiscriminator");
        Intrinsics.checkNotNullParameter(classDiscriminatorMode, "classDiscriminatorMode");
        this.f1128d = z5;
        this.f1129e = z6;
        this.f1131g = prettyPrintIndent;
        this.f1126b = classDiscriminator;
        this.f1130f = z7;
        this.f1127c = classDiscriminatorMode;
    }
}
