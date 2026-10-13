package m;

import android.view.KeyboardShortcutGroup;
import android.view.Menu;
import android.view.Window;
import java.util.List;

/* loaded from: classes.dex */
public abstract class h {
    public static void a(Window.Callback callback, List<KeyboardShortcutGroup> list, Menu menu, int i5) {
        callback.onProvideKeyboardShortcuts(list, menu, i5);
    }
}
