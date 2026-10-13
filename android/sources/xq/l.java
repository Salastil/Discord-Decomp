package xq;

import a5.h0;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import java.util.Arrays;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.locks.ReentrantLock;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.text.StringsKt;
import qa.t;

/* loaded from: classes3.dex */
public class l implements o {

    /* renamed from: d, reason: collision with root package name */
    public static final String f20550d = StringsKt.Z(l.class.getCanonicalName(), "");

    /* renamed from: e, reason: collision with root package name */
    public static final b f20551e = new b("NO_LOCKS", a.f20533d);
    public final n a;

    /* renamed from: b, reason: collision with root package name */
    public final a f20552b;

    /* renamed from: c, reason: collision with root package name */
    public final String f20553c;

    public l(String str) {
        this(str, new t(new ReentrantLock()));
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x0085  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x008d  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0092  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0095  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x009a  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00a4  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00a9  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00ae  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00b3  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00b6  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00b9  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00be  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String format;
        String str = (i5 == 10 || i5 == 13 || i5 == 20 || i5 == 37) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 10 || i5 == 13 || i5 == 20 || i5 == 37) ? 2 : 3];
        if (i5 != 1 && i5 != 3 && i5 != 5) {
            if (i5 != 6) {
                switch (i5) {
                    case 8:
                        break;
                    case 9:
                    case 11:
                    case 14:
                    case 16:
                    case 19:
                    case 21:
                        objArr[0] = "compute";
                        break;
                    case 10:
                    case 13:
                    case 20:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager";
                        break;
                    case 12:
                    case 17:
                    case 25:
                    case 27:
                        objArr[0] = "onRecursiveCall";
                        break;
                    case 15:
                    case 18:
                    case 22:
                        objArr[0] = "map";
                        break;
                    case 23:
                    case 24:
                    case 26:
                    case 28:
                    case 30:
                    case 31:
                    case 32:
                    case 34:
                        objArr[0] = "computable";
                        break;
                    case 29:
                    case 33:
                        objArr[0] = "postCompute";
                        break;
                    case 35:
                        objArr[0] = "source";
                        break;
                    case 36:
                        objArr[0] = "throwable";
                        break;
                    default:
                        objArr[0] = "debugText";
                        break;
                }
            } else {
                objArr[0] = "lock";
            }
            if (i5 != 10 || i5 == 13) {
                objArr[1] = "createMemoizedFunction";
            } else if (i5 == 20) {
                objArr[1] = "createMemoizedFunctionWithNullableValues";
            } else if (i5 != 37) {
                objArr[1] = "kotlin/reflect/jvm/internal/impl/storage/LockBasedStorageManager";
            } else {
                objArr[1] = "sanitizeStackTrace";
            }
            switch (i5) {
                case 4:
                case 5:
                case 6:
                    objArr[2] = "<init>";
                    break;
                case 7:
                case 8:
                    objArr[2] = "replaceExceptionHandling";
                    break;
                case 9:
                case 11:
                case 12:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                    objArr[2] = "createMemoizedFunction";
                    break;
                case 10:
                case 13:
                case 20:
                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    break;
                case 19:
                case 21:
                case 22:
                    objArr[2] = "createMemoizedFunctionWithNullableValues";
                    break;
                case 23:
                case 24:
                case 25:
                    objArr[2] = "createLazyValue";
                    break;
                case 26:
                case 27:
                    objArr[2] = "createRecursionTolerantLazyValue";
                    break;
                case 28:
                case 29:
                    objArr[2] = "createLazyValueWithPostCompute";
                    break;
                case 30:
                    objArr[2] = "createNullableLazyValue";
                    break;
                case 31:
                    objArr[2] = "createRecursionTolerantNullableLazyValue";
                    break;
                case 32:
                case 33:
                    objArr[2] = "createNullableLazyValueWithPostCompute";
                    break;
                case 34:
                    objArr[2] = "compute";
                    break;
                case 35:
                    objArr[2] = "recursionDetectedDefault";
                    break;
                case 36:
                    objArr[2] = "sanitizeStackTrace";
                    break;
                default:
                    objArr[2] = "createWithExceptionHandling";
                    break;
            }
            format = String.format(str, objArr);
            if (i5 == 10 && i5 != 13 && i5 != 20 && i5 != 37) {
                throw new IllegalArgumentException(format);
            }
            throw new IllegalStateException(format);
        }
        objArr[0] = "exceptionHandlingStrategy";
        if (i5 != 10) {
        }
        objArr[1] = "createMemoizedFunction";
        switch (i5) {
        }
        format = String.format(str, objArr);
        if (i5 == 10) {
        }
        throw new IllegalStateException(format);
    }

    public static void f(AssertionError assertionError) {
        StackTraceElement[] stackTrace = assertionError.getStackTrace();
        int length = stackTrace.length;
        int i5 = 0;
        while (true) {
            if (i5 >= length) {
                i5 = -1;
                break;
            } else if (!stackTrace[i5].getClassName().startsWith(f20550d)) {
                break;
            } else {
                i5++;
            }
        }
        List subList = Arrays.asList(stackTrace).subList(i5, length);
        assertionError.setStackTrace((StackTraceElement[]) subList.toArray(new StackTraceElement[subList.size()]));
    }

    public final i b(Function0 function0) {
        return new i(this, function0);
    }

    public final e c(Function1 function1) {
        return new e(this, new ConcurrentHashMap(3, 1.0f, 2), function1, 1);
    }

    public final j d(Function1 function1) {
        return new j(this, new ConcurrentHashMap(3, 1.0f, 2), function1);
    }

    public h0 e(Object obj, String str) {
        String str2;
        StringBuilder sb2 = new StringBuilder("Recursion detected ");
        sb2.append(str);
        if (obj == null) {
            str2 = "";
        } else {
            str2 = "on input: " + obj;
        }
        sb2.append(str2);
        sb2.append(" under ");
        sb2.append(this);
        AssertionError assertionError = new AssertionError(sb2.toString());
        f(assertionError);
        throw assertionError;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(getClass().getSimpleName());
        sb2.append("@");
        sb2.append(Integer.toHexString(hashCode()));
        sb2.append(" (");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f20553c, ")");
    }

    public l(String str, n nVar) {
        a aVar = a.f20534e;
        this.a = nVar;
        this.f20552b = aVar;
        this.f20553c = str;
    }
}
