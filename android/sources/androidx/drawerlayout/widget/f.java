package androidx.drawerlayout.widget;

import android.view.View;
import androidx.drawerlayout.widget.DrawerLayout;

/* loaded from: classes.dex */
public final class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ DrawerLayout.ViewDragCallback f1866d;

    public f(DrawerLayout.ViewDragCallback viewDragCallback) {
        this.f1866d = viewDragCallback;
    }

    @Override // java.lang.Runnable
    public final void run() {
        View findDrawerWithGravity;
        int width;
        DrawerLayout.ViewDragCallback viewDragCallback = this.f1866d;
        DrawerLayout drawerLayout = DrawerLayout.this;
        int i5 = viewDragCallback.f1853c.f1705o;
        int i6 = viewDragCallback.f1852b;
        boolean z5 = i6 == 3;
        if (z5) {
            findDrawerWithGravity = drawerLayout.findDrawerWithGravity(3);
            width = (findDrawerWithGravity != null ? -findDrawerWithGravity.getWidth() : 0) + i5;
        } else {
            findDrawerWithGravity = drawerLayout.findDrawerWithGravity(5);
            width = drawerLayout.getWidth() - i5;
        }
        if (findDrawerWithGravity != null) {
            if (((!z5 || findDrawerWithGravity.getLeft() >= width) && (z5 || findDrawerWithGravity.getLeft() <= width)) || drawerLayout.getDrawerLockMode(findDrawerWithGravity) != 0) {
                return;
            }
            d dVar = (d) findDrawerWithGravity.getLayoutParams();
            viewDragCallback.f1853c.s(findDrawerWithGravity, width, findDrawerWithGravity.getTop());
            dVar.f1859c = true;
            drawerLayout.invalidate();
            View findDrawerWithGravity2 = drawerLayout.findDrawerWithGravity(i6 == 3 ? 5 : 3);
            if (findDrawerWithGravity2 != null) {
                drawerLayout.closeDrawer(findDrawerWithGravity2);
            }
            drawerLayout.cancelChildViewTouch();
        }
    }
}
