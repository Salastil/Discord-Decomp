package j2;

import android.view.View;

/* loaded from: classes.dex */
public final class d extends zk.a {
    public final /* synthetic */ int j;

    public /* synthetic */ d(int i5) {
        this.j = i5;
    }

    @Override // zk.a
    public final void K(Object obj, float f2) {
        switch (this.j) {
            case 0:
                ((View) obj).setY(f2);
                break;
            case 1:
                ((View) obj).setAlpha(f2);
                break;
            case 2:
                ((View) obj).setScaleX(f2);
                break;
            case 3:
                ((View) obj).setScaleY(f2);
                break;
            case 4:
                ((View) obj).setRotation(f2);
                break;
            case 5:
                ((View) obj).setRotationX(f2);
                break;
            case 6:
                ((View) obj).setRotationY(f2);
                break;
            default:
                ((View) obj).setX(f2);
                break;
        }
    }

    @Override // zk.a
    public final float t(Object obj) {
        switch (this.j) {
            case 0:
                return ((View) obj).getY();
            case 1:
                return ((View) obj).getAlpha();
            case 2:
                return ((View) obj).getScaleX();
            case 3:
                return ((View) obj).getScaleY();
            case 4:
                return ((View) obj).getRotation();
            case 5:
                return ((View) obj).getRotationX();
            case 6:
                return ((View) obj).getRotationY();
            default:
                return ((View) obj).getX();
        }
    }
}
