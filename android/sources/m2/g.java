package m2;

import android.text.InputFilter;
import android.text.method.TransformationMethod;
import android.widget.TextView;

/* loaded from: classes.dex */
public final class g extends zk.a {
    public final f j;

    public g(TextView textView) {
        this.j = new f(textView);
    }

    @Override // zk.a
    public final void F(boolean z5) {
        if (k2.j.k != null) {
            this.j.F(z5);
        }
    }

    @Override // zk.a
    public final void I(boolean z5) {
        f fVar = this.j;
        if (k2.j.k != null) {
            fVar.I(z5);
        } else {
            fVar.f14322l = z5;
        }
    }

    @Override // zk.a
    public final TransformationMethod O(TransformationMethod transformationMethod) {
        return !(k2.j.k != null) ? transformationMethod : this.j.O(transformationMethod);
    }

    @Override // zk.a
    public final InputFilter[] s(InputFilter[] inputFilterArr) {
        return !(k2.j.k != null) ? inputFilterArr : this.j.s(inputFilterArr);
    }

    @Override // zk.a
    public final boolean w() {
        return this.j.f14322l;
    }
}
