package ni;

import java.util.Set;

/* loaded from: classes3.dex */
public interface c {
    default Object b(Class cls) {
        return c(q.a(cls));
    }

    default Object c(q qVar) {
        yi.a f2 = f(qVar);
        if (f2 == null) {
            return null;
        }
        return f2.get();
    }

    default yi.a e(Class cls) {
        return f(q.a(cls));
    }

    yi.a f(q qVar);

    yi.a g(q qVar);

    default Set h(q qVar) {
        return (Set) g(qVar).get();
    }
}
