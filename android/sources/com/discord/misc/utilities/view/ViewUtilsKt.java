package com.discord.misc.utilities.view;

import android.app.Activity;
import android.content.Context;
import android.content.ContextWrapper;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.Window;
import android.widget.TextView;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00008\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\r\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0014\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004\u001a \u0010\u0005\u001a\u0004\u0018\u0001H\u0006\"\n\b\u0000\u0010\u0006\u0018\u0001*\u00020\u0007*\u00020\bH\u0086\b¢\u0006\u0002\u0010\t\u001a\u001f\u0010\n\u001a\b\u0012\u0004\u0012\u0002H\u00060\u000b\"\n\b\u0000\u0010\u0006\u0018\u0001*\u00020\u0007*\u00020\bH\u0086\b\u001a\n\u0010\f\u001a\u00020\r*\u00020\b\u001a\u0015\u0010\u000e\u001a\u0004\u0018\u00010\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011H\u0086\u0010¨\u0006\u0012"}, d2 = {"setOptionalText", "", "Landroid/widget/TextView;", "text", "", "findParentView", "T", "Landroid/view/ViewGroup;", "Landroid/view/View;", "(Landroid/view/View;)Landroid/view/ViewGroup;", "findParentViews", "", "isLtr", "", "getWindow", "Landroid/view/Window;", "context", "Landroid/content/Context;", "misc_utilities_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nViewUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewUtils.kt\ncom/discord/misc/utilities/view/ViewUtilsKt\n+ 2 View.kt\nandroidx/core/view/ViewKt\n*L\n1#1,49:1\n21#1,9:52\n21#1,9:61\n257#2,2:50\n*S KotlinDebug\n*F\n+ 1 ViewUtils.kt\ncom/discord/misc/utilities/view/ViewUtilsKt\n*L\n34#1:52,9\n37#1:61,9\n17#1:50,2\n*E\n"})
/* loaded from: classes.dex */
public final class ViewUtilsKt {
    public static final /* synthetic */ <T extends ViewGroup> T findParentView(View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        ViewParent parent = view.getParent();
        T t5 = parent instanceof ViewGroup ? (T) parent : null;
        if (t5 == null) {
            return null;
        }
        Intrinsics.reifiedOperationMarker(2, "T");
        return t5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:24:0x0021, code lost:
    
        r5 = null;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final /* synthetic */ <T extends ViewGroup> List<T> findParentViews(View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        ArrayList arrayList = new ArrayList();
        ViewParent parent = view.getParent();
        ViewGroup viewGroup = parent instanceof ViewGroup ? (ViewGroup) parent : null;
        if (viewGroup != null) {
            Intrinsics.reifiedOperationMarker(2, "T");
            while (viewGroup != null) {
                arrayList.add(viewGroup);
                ViewParent parent2 = viewGroup.getParent();
                viewGroup = parent2 instanceof ViewGroup ? (ViewGroup) parent2 : null;
                if (viewGroup != null) {
                    Intrinsics.reifiedOperationMarker(2, "T");
                }
            }
            return arrayList;
        }
        viewGroup = null;
    }

    public static final Window getWindow(Context context) {
        while (context != null) {
            if (context instanceof Activity) {
                return ((Activity) context).getWindow();
            }
            ContextWrapper contextWrapper = context instanceof ContextWrapper ? (ContextWrapper) context : null;
            context = contextWrapper != null ? contextWrapper.getBaseContext() : null;
        }
        return null;
    }

    public static final boolean isLtr(@NotNull View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        return view.getLayoutDirection() == 0;
    }

    public static final void setOptionalText(@NotNull TextView textView, CharSequence charSequence) {
        Intrinsics.checkNotNullParameter(textView, "<this>");
        textView.setText(charSequence);
        textView.setVisibility(charSequence == null || StringsKt.K(charSequence) ? 8 : 0);
    }
}
