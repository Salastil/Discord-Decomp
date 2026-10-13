package androidx.appcompat.widget;

import android.view.textclassifier.TextClassifier;
import androidx.appcompat.widget.AppCompatTextView;

/* loaded from: classes.dex */
public class z0 implements AppCompatTextView.SuperCaller {
    public final /* synthetic */ AppCompatTextView a;

    public z0(AppCompatTextView appCompatTextView) {
        this.a = appCompatTextView;
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final void a(int[] iArr, int i5) {
        super/*android.widget.TextView*/.setAutoSizeTextTypeUniformWithPresetSizes(iArr, i5);
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final int[] b() {
        int[] autoSizeTextAvailableSizes;
        autoSizeTextAvailableSizes = super/*android.widget.TextView*/.getAutoSizeTextAvailableSizes();
        return autoSizeTextAvailableSizes;
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final TextClassifier c() {
        TextClassifier textClassifier;
        textClassifier = super/*android.widget.TextView*/.getTextClassifier();
        return textClassifier;
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final int d() {
        int autoSizeMaxTextSize;
        autoSizeMaxTextSize = super/*android.widget.TextView*/.getAutoSizeMaxTextSize();
        return autoSizeMaxTextSize;
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final void e(TextClassifier textClassifier) {
        super/*android.widget.TextView*/.setTextClassifier(textClassifier);
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public void f(int i5) {
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final void g(int i5, int i6, int i10, int i11) {
        super/*android.widget.TextView*/.setAutoSizeTextTypeUniformWithConfiguration(i5, i6, i10, i11);
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final int h() {
        int autoSizeTextType;
        autoSizeTextType = super/*android.widget.TextView*/.getAutoSizeTextType();
        return autoSizeTextType;
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final int i() {
        int autoSizeMinTextSize;
        autoSizeMinTextSize = super/*android.widget.TextView*/.getAutoSizeMinTextSize();
        return autoSizeMinTextSize;
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public void j(int i5) {
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final int k() {
        int autoSizeStepGranularity;
        autoSizeStepGranularity = super/*android.widget.TextView*/.getAutoSizeStepGranularity();
        return autoSizeStepGranularity;
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final void l(int i5) {
        super/*android.widget.TextView*/.setAutoSizeTextTypeWithDefaults(i5);
    }

    @Override // androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public void m(int i5, float f2) {
    }
}
