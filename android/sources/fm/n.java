package fm;

import app.rive.runtime.kotlin.core.Alignment;
import app.rive.runtime.kotlin.core.File;
import app.rive.runtime.kotlin.core.Fit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class n {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f8790b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f8791c;

    /* renamed from: d, reason: collision with root package name */
    public final File f8792d;

    /* renamed from: e, reason: collision with root package name */
    public final Alignment f8793e;

    /* renamed from: f, reason: collision with root package name */
    public final Fit f8794f;

    /* renamed from: g, reason: collision with root package name */
    public final Float f8795g;

    /* renamed from: h, reason: collision with root package name */
    public final io.sentry.config.a f8796h;

    public n(String str, String str2, boolean z5, File riveFile, Alignment alignment, Fit fit, Float f2, io.sentry.config.a bindData) {
        Intrinsics.checkNotNullParameter(riveFile, "riveFile");
        Intrinsics.checkNotNullParameter(alignment, "alignment");
        Intrinsics.checkNotNullParameter(fit, "fit");
        Intrinsics.checkNotNullParameter(bindData, "bindData");
        this.a = str;
        this.f8790b = str2;
        this.f8791c = z5;
        this.f8792d = riveFile;
        this.f8793e = alignment;
        this.f8794f = fit;
        this.f8795g = f2;
        this.f8796h = bindData;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof n)) {
            return false;
        }
        n nVar = (n) obj;
        return Intrinsics.areEqual(this.a, nVar.a) && Intrinsics.areEqual(this.f8790b, nVar.f8790b) && this.f8791c == nVar.f8791c && Intrinsics.areEqual(this.f8792d, nVar.f8792d) && this.f8793e == nVar.f8793e && this.f8794f == nVar.f8794f && Intrinsics.areEqual((Object) this.f8795g, (Object) nVar.f8795g) && Intrinsics.areEqual(this.f8796h, nVar.f8796h);
    }

    public final int hashCode() {
        String str = this.a;
        int hashCode = (str == null ? 0 : str.hashCode()) * 31;
        String str2 = this.f8790b;
        int hashCode2 = (this.f8794f.hashCode() + ((this.f8793e.hashCode() + ((this.f8792d.hashCode() + k0.d.d((hashCode + (str2 == null ? 0 : str2.hashCode())) * 31, 31, this.f8791c)) * 31)) * 31)) * 31;
        Float f2 = this.f8795g;
        return this.f8796h.hashCode() + ((hashCode2 + (f2 != null ? f2.hashCode() : 0)) * 31);
    }

    public final String toString() {
        StringBuilder t5 = a3.e.t("ViewConfiguration(artboardName=", this.a, ", stateMachineName=", this.f8790b, ", autoPlay=");
        t5.append(this.f8791c);
        t5.append(", riveFile=");
        t5.append(this.f8792d);
        t5.append(", alignment=");
        t5.append(this.f8793e);
        t5.append(", fit=");
        t5.append(this.f8794f);
        t5.append(", layoutScaleFactor=");
        t5.append(this.f8795g);
        t5.append(", bindData=");
        t5.append(this.f8796h);
        t5.append(")");
        return t5.toString();
    }
}
