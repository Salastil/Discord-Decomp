package m2;

import android.text.InputFilter;
import android.text.method.PasswordTransformationMethod;
import android.text.method.TransformationMethod;
import android.util.SparseArray;
import android.widget.TextView;

/* loaded from: classes.dex */
public final class f extends zk.a {
    public final TextView j;
    public final d k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f14322l = true;

    public f(TextView textView) {
        this.j = textView;
        this.k = new d(textView);
    }

    @Override // zk.a
    public final void F(boolean z5) {
        if (z5) {
            TextView textView = this.j;
            textView.setTransformationMethod(O(textView.getTransformationMethod()));
        }
    }

    @Override // zk.a
    public final void I(boolean z5) {
        this.f14322l = z5;
        TextView textView = this.j;
        textView.setTransformationMethod(O(textView.getTransformationMethod()));
        textView.setFilters(s(textView.getFilters()));
    }

    @Override // zk.a
    public final TransformationMethod O(TransformationMethod transformationMethod) {
        return this.f14322l ? transformationMethod instanceof j ? transformationMethod : transformationMethod instanceof PasswordTransformationMethod ? transformationMethod : new j(transformationMethod) : transformationMethod instanceof j ? ((j) transformationMethod).f14326d : transformationMethod;
    }

    @Override // zk.a
    public final InputFilter[] s(InputFilter[] inputFilterArr) {
        if (!this.f14322l) {
            SparseArray sparseArray = new SparseArray(1);
            for (int i5 = 0; i5 < inputFilterArr.length; i5++) {
                InputFilter inputFilter = inputFilterArr[i5];
                if (inputFilter instanceof d) {
                    sparseArray.put(i5, inputFilter);
                }
            }
            if (sparseArray.size() == 0) {
                return inputFilterArr;
            }
            int length = inputFilterArr.length;
            InputFilter[] inputFilterArr2 = new InputFilter[inputFilterArr.length - sparseArray.size()];
            int i6 = 0;
            for (int i10 = 0; i10 < length; i10++) {
                if (sparseArray.indexOfKey(i10) < 0) {
                    inputFilterArr2[i6] = inputFilterArr[i10];
                    i6++;
                }
            }
            return inputFilterArr2;
        }
        int length2 = inputFilterArr.length;
        int i11 = 0;
        while (true) {
            d dVar = this.k;
            if (i11 >= length2) {
                InputFilter[] inputFilterArr3 = new InputFilter[inputFilterArr.length + 1];
                System.arraycopy(inputFilterArr, 0, inputFilterArr3, 0, length2);
                inputFilterArr3[length2] = dVar;
                return inputFilterArr3;
            }
            if (inputFilterArr[i11] == dVar) {
                return inputFilterArr;
            }
            i11++;
        }
    }

    @Override // zk.a
    public final boolean w() {
        return this.f14322l;
    }
}
