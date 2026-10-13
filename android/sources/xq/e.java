package xq;

import java.util.concurrent.ConcurrentHashMap;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final class e extends j {

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f20538v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ e(l lVar, ConcurrentHashMap concurrentHashMap, Function1 function1, int i5) {
        super(lVar, concurrentHashMap, function1);
        this.f20538v = i5;
    }

    public static /* synthetic */ void a(int i5) {
        String str = i5 != 3 ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[i5 != 3 ? 3 : 2];
        if (i5 == 1) {
            objArr[0] = "map";
        } else if (i5 == 2) {
            objArr[0] = "computation";
        } else if (i5 != 3) {
            objArr[0] = "storageManager";
        } else {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$CacheWithNotNullValuesBasedOnMemoizedFunction";
        }
        if (i5 != 3) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$CacheWithNotNullValuesBasedOnMemoizedFunction";
        } else {
            objArr[1] = "computeIfAbsent";
        }
        if (i5 == 2) {
            objArr[2] = "computeIfAbsent";
        } else if (i5 != 3) {
            objArr[2] = "<init>";
        }
        String format = String.format(str, objArr);
        if (i5 == 3) {
            throw new IllegalStateException(format);
        }
    }

    @Override // xq.j, kotlin.jvm.functions.Function1
    public Object invoke(Object obj) {
        switch (this.f20538v) {
            case 1:
                Object invoke = super.invoke(obj);
                if (invoke != null) {
                    return invoke;
                }
                throw new IllegalStateException(String.format("@NotNull method %s.%s must not return null", "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager$MapBasedMemoizedFunctionToNotNull", "invoke"));
            default:
                return super.invoke(obj);
        }
    }
}
