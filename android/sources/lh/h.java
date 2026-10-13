package lh;

import com.google.android.material.button.MaterialButton;

/* loaded from: classes3.dex */
public final class h extends zk.a {
    public final int j;

    public h(int i5) {
        this.j = i5;
    }

    @Override // zk.a
    public final void K(Object obj, float f2) {
        i iVar = (i) obj;
        float[] fArr = iVar.Z;
        if (fArr != null) {
            int i5 = this.j;
            if (fArr[i5] != f2) {
                fArr[i5] = f2;
                ni.a aVar = iVar.f13999b0;
                if (aVar != null) {
                    float i6 = iVar.i();
                    MaterialButton materialButton = (MaterialButton) aVar.f15479e;
                    int i10 = (int) (i6 * 0.11f);
                    if (materialButton.U != i10) {
                        materialButton.U = i10;
                        materialButton.j();
                        materialButton.invalidate();
                    }
                }
                iVar.invalidateSelf();
            }
        }
    }

    @Override // zk.a
    public final float t(Object obj) {
        float[] fArr = ((i) obj).Z;
        if (fArr != null) {
            return fArr[this.j];
        }
        return 0.0f;
    }
}
