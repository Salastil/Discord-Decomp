package r2;

import androidx.lifecycle.LifecycleOwner;
import fo.d;
import fo.q;
import fo.r;
import java.lang.annotation.Annotation;
import java.lang.reflect.Method;
import ki.b;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import u.y;

/* loaded from: classes.dex */
public abstract class a {
    public static final /* synthetic */ int a = 0;

    /* JADX WARN: Code restructure failed: missing block: B:20:0x002d, code lost:
    
        r1 = r1.invoke(null, null);
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x0033, code lost:
    
        if ((r1 instanceof u.y) == false) goto L7;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x0035, code lost:
    
        r1 = (u.y) r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:9:0x0026, code lost:
    
        r1 = null;
     */
    static {
        Object i5;
        try {
            q qVar = Result.f13476e;
            ClassLoader classLoader = LifecycleOwner.class.getClassLoader();
            Intrinsics.checkNotNull(classLoader);
            Method method = classLoader.loadClass("androidx.compose.ui.platform.AndroidCompositionLocals_androidKt").getMethod("getLocalLifecycleOwner", null);
            Annotation[] annotations = method.getAnnotations();
            int length = annotations.length;
            int i6 = 0;
            while (true) {
                if (i6 >= length) {
                    break;
                } else if (annotations[i6] instanceof d) {
                    break;
                } else {
                    i6++;
                }
            }
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        q qVar3 = Result.f13476e;
        if (((y) (i5 instanceof r ? null : i5)) == null) {
            new y(new o5.a(15));
        }
    }
}
