package o1;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class l extends Exception {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ int f15728e = 0;

    /* renamed from: d, reason: collision with root package name */
    public final String f15729d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(CharSequence charSequence, String type) {
        super(charSequence != null ? charSequence.toString() : null);
        Intrinsics.checkNotNullParameter(type, "type");
        this.f15729d = type;
    }

    public String a() {
        return this.f15729d;
    }
}
