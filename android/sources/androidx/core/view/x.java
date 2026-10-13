package androidx.core.view;

import android.view.View;
import android.view.inputmethod.InputMethodManager;
import org.webrtc.PeerConnection;

/* loaded from: classes.dex */
public final /* synthetic */ class x implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1651d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ View f1652e;

    public /* synthetic */ x(int i5, View view) {
        this.f1651d = i5;
        this.f1652e = view;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f1651d) {
            case 0:
                View view = this.f1652e;
                ((InputMethodManager) view.getContext().getSystemService("input_method")).showSoftInput(view, 0);
                break;
            case 1:
                View view2 = this.f1652e;
                ((InputMethodManager) view2.getContext().getSystemService(InputMethodManager.class)).showSoftInput(view2, 1);
                break;
            case 2:
                this.f1652e.sendAccessibilityEvent(PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS);
                break;
            default:
                this.f1652e.invalidate();
                break;
        }
    }
}
