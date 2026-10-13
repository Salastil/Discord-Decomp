package xq;

/* loaded from: classes3.dex */
public class i extends h implements m {
    @Override // xq.h, kotlin.jvm.functions.Function0
    public final Object invoke() {
        Object invoke = super.invoke();
        if (invoke != null) {
            return invoke;
        }
        throw new IllegalStateException(String.format("@NotNull method %s.%s must not return null", "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$LockBasedNotNullLazyValue", "invoke"));
    }
}
