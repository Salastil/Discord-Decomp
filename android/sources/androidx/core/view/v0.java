package androidx.core.view;

import android.view.ViewGroup;
import java.util.Iterator;
import kotlin.sequences.Sequence;

/* loaded from: classes.dex */
public final class v0 implements Sequence {
    final /* synthetic */ ViewGroup a;

    public v0(ViewGroup viewGroup) {
        this.a = viewGroup;
    }

    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        return new w0(this.a);
    }
}
