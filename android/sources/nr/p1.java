package nr;

import java.util.concurrent.CancellationException;
import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public final class p1 extends CancellationException {

    /* renamed from: d, reason: collision with root package name */
    public final transient Job f15650d;

    public p1(String str, Job job) {
        super(str);
        this.f15650d = job;
    }
}
