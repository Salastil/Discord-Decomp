package l4;

import java.util.Arrays;

/* loaded from: classes.dex */
public final class a0 {
    public final i a;

    /* renamed from: b, reason: collision with root package name */
    public final Throwable f13705b;

    public a0(i iVar) {
        this.a = iVar;
        this.f13705b = null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a0)) {
            return false;
        }
        a0 a0Var = (a0) obj;
        i iVar = this.a;
        if (iVar != null && iVar.equals(a0Var.a)) {
            return true;
        }
        Throwable th2 = this.f13705b;
        if (th2 == null || a0Var.f13705b == null) {
            return false;
        }
        return th2.toString().equals(th2.toString());
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.a, this.f13705b});
    }

    public a0(Throwable th2) {
        this.f13705b = th2;
        this.a = null;
    }
}
