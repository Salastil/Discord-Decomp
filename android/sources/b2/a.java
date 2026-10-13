package b2;

import android.database.ContentObserver;
import android.database.Cursor;
import android.os.Handler;
import android.provider.Settings;
import androidx.appcompat.widget.h3;

/* loaded from: classes.dex */
public final class a extends ContentObserver {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f2724b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(rb.a aVar, Handler handler) {
        super(handler);
        this.f2724b = aVar;
    }

    @Override // android.database.ContentObserver
    public final boolean deliverSelfNotifications() {
        switch (this.a) {
        }
        return true;
    }

    @Override // android.database.ContentObserver
    public final void onChange(boolean z5) {
        Cursor cursor;
        switch (this.a) {
            case 0:
                h3 h3Var = (h3) this.f2724b;
                if (h3Var.f2726e && (cursor = h3Var.f2727i) != null && !cursor.isClosed()) {
                    h3Var.f2725d = h3Var.f2727i.requery();
                    break;
                }
                break;
            default:
                super.onChange(z5);
                rb.a aVar = (rb.a) this.f2724b;
                aVar.f17179e.invoke(Boolean.valueOf(Settings.System.getInt(aVar.f17178d.getContentResolver(), aVar.f17181v, 0) == 1));
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(h3 h3Var) {
        super(new Handler());
        this.f2724b = h3Var;
    }
}
