package eq;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends a {

    /* renamed from: g, reason: collision with root package name */
    public static final f f8216g;

    /* renamed from: h, reason: collision with root package name */
    public static final f f8217h;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f8218f;

    static {
        f fVar = new f(2, 1, 0);
        f8216g = fVar;
        int i5 = fVar.f8187c;
        int i6 = fVar.f8186b;
        f8217h = (i6 == 1 && i5 == 9) ? new f(2, 0, 0) : new f(i6, i5 + 1, 0);
        new f(new int[0]);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(int[] versionArray, boolean z5) {
        super(Arrays.copyOf(versionArray, versionArray.length));
        Intrinsics.checkNotNullParameter(versionArray, "versionArray");
        this.f8218f = z5;
    }

    public final boolean b(f metadataVersionFromLanguageVersion) {
        Intrinsics.checkNotNullParameter(metadataVersionFromLanguageVersion, "metadataVersionFromLanguageVersion");
        metadataVersionFromLanguageVersion.getClass();
        f fVar = this.f8218f ? f8216g : f8217h;
        int i5 = fVar.f8186b;
        int i6 = metadataVersionFromLanguageVersion.f8186b;
        if (i5 > i6 || (i5 >= i6 && fVar.f8187c > metadataVersionFromLanguageVersion.f8187c)) {
            metadataVersionFromLanguageVersion = fVar;
        }
        int i10 = this.f8187c;
        boolean z5 = false;
        int i11 = this.f8186b;
        if ((i11 == 1 && i10 == 0) || i11 == 0) {
            return false;
        }
        int i12 = metadataVersionFromLanguageVersion.f8186b;
        if (i11 > i12 || (i11 >= i12 && i10 > metadataVersionFromLanguageVersion.f8187c)) {
            z5 = true;
        }
        return !z5;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public f(int... numbers) {
        this(numbers, false);
        Intrinsics.checkNotNullParameter(numbers, "numbers");
    }
}
