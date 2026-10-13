package ka;

import android.graphics.Bitmap;
import com.facebook.common.references.CloseableReference;
import com.facebook.datasource.DataSource;
import oa.d;
import oa.g;

/* loaded from: classes3.dex */
public abstract class a extends y8.b {
    public abstract void onNewResultImpl(Bitmap bitmap);

    @Override // y8.b
    public void onNewResultImpl(DataSource dataSource) {
        if (dataSource.isFinished()) {
            CloseableReference closeableReference = (CloseableReference) dataSource.getResult();
            try {
                onNewResultImpl((closeableReference == null || !(closeableReference.q() instanceof d)) ? null : ((g) ((d) closeableReference.q())).f15806w);
            } finally {
                CloseableReference.l(closeableReference);
            }
        }
    }
}
