package q1;

import kotlin.jvm.internal.Intrinsics;
import o1.l;

/* loaded from: classes.dex */
public final class b extends l {

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ int f16647w = 0;

    /* renamed from: x, reason: collision with root package name */
    public static final /* synthetic */ int f16648x = 0;

    /* renamed from: i, reason: collision with root package name */
    public final String f16649i;

    /* renamed from: v, reason: collision with root package name */
    public final p1.a f16650v;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(p1.a domError, String str) {
        super(str, type);
        Intrinsics.checkNotNullParameter(domError, "domError");
        String type = "androidx.credentials.TYPE_GET_PUBLIC_KEY_CREDENTIAL_DOM_EXCEPTION/".concat(domError.a);
        Intrinsics.checkNotNullParameter(type, "type");
        this.f16649i = type;
        if (type.length() <= 0) {
            throw new IllegalArgumentException("type must not be empty");
        }
        this.f16650v = domError;
    }

    @Override // o1.l
    public final String a() {
        return this.f16649i;
    }
}
