package a5;

import android.text.TextUtils;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class n implements k2.p {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f196d;

    /* renamed from: e, reason: collision with root package name */
    public final String f197e;

    public /* synthetic */ n(m mVar) {
        this.f196d = 0;
        this.f197e = mVar.f193d;
    }

    @Override // k2.p
    public boolean b(CharSequence charSequence, int i5, int i6, k2.x xVar) {
        if (!TextUtils.equals(charSequence.subSequence(i5, i6), this.f197e)) {
            return true;
        }
        xVar.f13160c = (xVar.f13160c & 3) | 4;
        return false;
    }

    public String toString() {
        switch (this.f196d) {
            case 2:
                return this.f197e;
            default:
                return super.toString();
        }
    }

    public n(String name, int i5) {
        this.f196d = i5;
        switch (i5) {
            case 2:
                Intrinsics.checkNotNullParameter(name, "name");
                this.f197e = name;
                break;
            case 3:
                this.f197e = name;
                break;
            default:
                Intrinsics.checkNotNullParameter(name, "discriminator");
                this.f197e = name;
                break;
        }
    }

    @Override // k2.p
    public Object getResult() {
        return this;
    }
}
