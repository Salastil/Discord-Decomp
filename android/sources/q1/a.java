package q1;

import kotlin.jvm.internal.Intrinsics;
import o1.d;

/* loaded from: classes.dex */
public final class a extends d {

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ int f16644i = 0;

    /* renamed from: v, reason: collision with root package name */
    public static final /* synthetic */ int f16645v = 0;

    /* renamed from: e, reason: collision with root package name */
    public final p1.a f16646e;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public a(p1.a domError, String str) {
        super(str, type);
        Intrinsics.checkNotNullParameter(domError, "domError");
        String type = "androidx.credentials.TYPE_CREATE_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/".concat(domError.a);
        Intrinsics.checkNotNullParameter(type, "type");
        if (type.length() <= 0) {
            throw new IllegalArgumentException("type must not be empty");
        }
        this.f16646e = domError;
    }
}
