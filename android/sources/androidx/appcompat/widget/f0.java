package androidx.appcompat.widget;

import android.app.Activity;
import android.content.ClipData;
import android.os.Build;
import android.text.Selection;
import android.text.Spannable;
import android.view.DragEvent;
import android.view.View;
import android.widget.TextView;
import androidx.annotation.NonNull;

/* loaded from: classes.dex */
public abstract class f0 {
    public static boolean a(@NonNull DragEvent dragEvent, @NonNull TextView textView, @NonNull Activity activity) {
        androidx.core.view.e eVar;
        activity.requestDragAndDropPermissions(dragEvent);
        int offsetForPosition = textView.getOffsetForPosition(dragEvent.getX(), dragEvent.getY());
        textView.beginBatchEdit();
        try {
            Selection.setSelection((Spannable) textView.getText(), offsetForPosition);
            ClipData clipData = dragEvent.getClipData();
            if (Build.VERSION.SDK_INT >= 31) {
                eVar = new androidx.core.view.d(clipData, 3);
            } else {
                androidx.core.view.f fVar = new androidx.core.view.f();
                fVar.f1580b = clipData;
                fVar.f1581c = 3;
                eVar = fVar;
            }
            androidx.core.view.s0.l(textView, eVar.build());
            textView.endBatchEdit();
            return true;
        } catch (Throwable th2) {
            textView.endBatchEdit();
            throw th2;
        }
    }

    public static boolean b(@NonNull DragEvent dragEvent, @NonNull View view, @NonNull Activity activity) {
        androidx.core.view.e eVar;
        activity.requestDragAndDropPermissions(dragEvent);
        ClipData clipData = dragEvent.getClipData();
        if (Build.VERSION.SDK_INT >= 31) {
            eVar = new androidx.core.view.d(clipData, 3);
        } else {
            androidx.core.view.f fVar = new androidx.core.view.f();
            fVar.f1580b = clipData;
            fVar.f1581c = 3;
            eVar = fVar;
        }
        androidx.core.view.s0.l(view, eVar.build());
        return true;
    }
}
