package com.discord.chat.presentation.list;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import bs.e1;
import com.facebook.react.uimanager.ViewGroupManager;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import kotlin.Metadata;
import kotlin.collections.h0;
import kotlin.collections.i0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.MutableStateFlow;
import org.jetbrains.annotations.NotNull;
import qr.c0;
import qr.y;

@Metadata(d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0007H\u0007J\u0010\u0010\u0013\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0007H\u0007J\u0010\u0010\u0014\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0007H\u0007J\u0010\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u0007H\u0007J\n\u0010\u0018\u001a\u0004\u0018\u00010\u0007H\u0002J\b\u0010\u0019\u001a\u00020\u0011H\u0002J\u0014\u0010\u001a\u001a\u00020\u0016*\u00020\u00072\u0006\u0010\u0017\u001a\u00020\u0007H\u0002J\u0018\u0010\u001b\u001a\u00020\u00162\u0006\u0010\u001c\u001a\u00020\u00072\u0006\u0010\u001d\u001a\u00020\u0007H\u0002J\u001c\u0010\u001e\u001a\u00020\u0016*\u00020\u001f2\u0006\u0010\u001c\u001a\u00020\u00072\u0006\u0010\u001d\u001a\u00020\u0007H\u0002J\u0018\u0010 \u001a\u00020\u00162\u0006\u0010\u001c\u001a\u00020\u00072\u0006\u0010\u001d\u001a\u00020\u0007H\u0002J\u0012\u0010!\u001a\b\u0012\u0004\u0012\u00020\u00070\"*\u00020\u0007H\u0002J\u0010\u0010#\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0007H\u0002R\u001a\u0010\u0004\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00070\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0007\u0018\u00010\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u000b0\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000b0\r¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000f¨\u0006$"}, d2 = {"Lcom/discord/chat/presentation/list/InlineMediaOwner;", "", "<init>", "()V", "attachedLists", "", "Ljava/lang/ref/WeakReference;", "Landroid/view/View;", "owner", "_generation", "Lkotlinx/coroutines/flow/MutableStateFlow;", "", "generation", "Lkotlinx/coroutines/flow/Flow;", "getGeneration", "()Lkotlinx/coroutines/flow/Flow;", "onListAttached", "", "list", "onListDetached", "onListVisibilityChanged", "ownsInlineMedia", "", "view", "topmostShownList", "publish", "containsDescendant", "isDrawnAbove", "a", "b", "paintsAbove", "Landroid/view/ViewGroup;", "isAttachedLater", "ancestryFromRoot", "", "forget", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nInlineMediaOwner.kt\nKotlin\n*S Kotlin\n*F\n+ 1 InlineMediaOwner.kt\ncom/discord/chat/presentation/list/InlineMediaOwner\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,159:1\n2746#2,3:160\n1617#2,9:163\n1869#2:172\n1870#2:174\n1626#2:175\n295#2,2:176\n1617#2,9:178\n1869#2:187\n1870#2:189\n1626#2:190\n774#2:191\n865#2,2:192\n1803#2,3:194\n388#2,7:198\n1#3:173\n1#3:188\n1#3:197\n*S KotlinDebug\n*F\n+ 1 InlineMediaOwner.kt\ncom/discord/chat/presentation/list/InlineMediaOwner\n*L\n66#1:160,3\n78#1:163,9\n78#1:172\n78#1:174\n78#1:175\n78#1:176,2\n87#1:178,9\n87#1:187\n87#1:189\n87#1:190\n88#1:191\n88#1:192,2\n89#1:194,3\n143#1:198,7\n78#1:173\n87#1:188\n*E\n"})
/* loaded from: classes.dex */
public final class InlineMediaOwner {

    @NotNull
    private static final MutableStateFlow _generation;

    @NotNull
    private static final Flow generation;
    private static WeakReference<View> owner;

    @NotNull
    public static final InlineMediaOwner INSTANCE = new InlineMediaOwner();

    @NotNull
    private static final List<WeakReference<View>> attachedLists = new ArrayList();

    static {
        c0 b10 = y.b(0);
        _generation = b10;
        generation = b10;
    }

    private InlineMediaOwner() {
    }

    private final List<View> ancestryFromRoot(View view) {
        ArrayList i5 = kotlin.collections.c0.i(view);
        for (Object parent = view.getParent(); parent instanceof View; parent = ((View) parent).getParent()) {
            i5.add(parent);
        }
        return i0.y(i5);
    }

    private final boolean containsDescendant(View view, View view2) {
        for (ViewParent parent = view2.getParent(); parent != null; parent = parent.getParent()) {
            if (parent == view) {
                return true;
            }
        }
        return false;
    }

    private final void forget(View list) {
        h0.s(attachedLists, new e1(7, list));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean forget$lambda$9(View view, WeakReference it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return it.get() == null || it.get() == view;
    }

    private final boolean isAttachedLater(View a, View b10) {
        int i5;
        int i6;
        List<WeakReference<View>> list = attachedLists;
        ListIterator<WeakReference<View>> listIterator = list.listIterator(list.size());
        while (true) {
            i5 = -1;
            if (!listIterator.hasPrevious()) {
                i6 = -1;
                break;
            }
            if (listIterator.previous().get() == a) {
                i6 = listIterator.nextIndex();
                break;
            }
        }
        List<WeakReference<View>> list2 = attachedLists;
        ListIterator<WeakReference<View>> listIterator2 = list2.listIterator(list2.size());
        while (true) {
            if (!listIterator2.hasPrevious()) {
                break;
            }
            if (listIterator2.previous().get() == b10) {
                i5 = listIterator2.nextIndex();
                break;
            }
        }
        return i6 > i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0028, code lost:
    
        if (r2 >= r0.size()) goto L25;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x002e, code lost:
    
        if (r2 < r1.size()) goto L16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0031, code lost:
    
        r3 = r0.get(r2 - 1);
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0039, code lost:
    
        if ((r3 instanceof android.view.ViewGroup) == false) goto L19;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x003b, code lost:
    
        r3 = (android.view.ViewGroup) r3;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x003f, code lost:
    
        if (r3 != null) goto L23;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0045, code lost:
    
        return isAttachedLater(r6, r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x0056, code lost:
    
        return paintsAbove(r3, r0.get(r2), r1.get(r2));
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x003e, code lost:
    
        r3 = null;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final boolean isDrawnAbove(View a, View b10) {
        List<View> ancestryFromRoot = ancestryFromRoot(a);
        List<View> ancestryFromRoot2 = ancestryFromRoot(b10);
        int i5 = 0;
        while (i5 < ancestryFromRoot.size() && i5 < ancestryFromRoot2.size() && ancestryFromRoot.get(i5) == ancestryFromRoot2.get(i5)) {
            i5++;
        }
        return isAttachedLater(a, b10);
    }

    private final boolean paintsAbove(ViewGroup viewGroup, View view, View view2) {
        ViewGroupManager.Companion companion = ViewGroupManager.INSTANCE;
        Integer viewZIndex = companion.getViewZIndex(view);
        int intValue = viewZIndex != null ? viewZIndex.intValue() : 0;
        Integer viewZIndex2 = companion.getViewZIndex(view2);
        int intValue2 = viewZIndex2 != null ? viewZIndex2.intValue() : 0;
        return intValue != intValue2 ? intValue > intValue2 : view.getZ() == view2.getZ() ? viewGroup.indexOfChild(view) > viewGroup.indexOfChild(view2) : view.getZ() > view2.getZ();
    }

    private final void publish() {
        View view = topmostShownList();
        WeakReference<View> weakReference = owner;
        if (view == (weakReference != null ? weakReference.get() : null)) {
            return;
        }
        owner = view != null ? new WeakReference<>(view) : null;
        MutableStateFlow mutableStateFlow = _generation;
        mutableStateFlow.setValue(Integer.valueOf(((Number) mutableStateFlow.getValue()).intValue() + 1));
    }

    private final View topmostShownList() {
        List<WeakReference<View>> list = attachedLists;
        ArrayList arrayList = new ArrayList();
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            View view = (View) ((WeakReference) it.next()).get();
            if (view != null) {
                arrayList.add(view);
            }
        }
        ArrayList<View> arrayList2 = new ArrayList();
        for (Object obj : arrayList) {
            if (((View) obj).isShown()) {
                arrayList2.add(obj);
            }
        }
        View view2 = null;
        for (View view3 : arrayList2) {
            if (view2 == null || INSTANCE.isDrawnAbove(view3, view2)) {
                view2 = view3;
            }
        }
        return view2;
    }

    @NotNull
    public final Flow getGeneration() {
        return generation;
    }

    public final void onListAttached(@NotNull View list) {
        Intrinsics.checkNotNullParameter(list, "list");
        forget(list);
        attachedLists.add(new WeakReference<>(list));
        publish();
    }

    public final void onListDetached(@NotNull View list) {
        Intrinsics.checkNotNullParameter(list, "list");
        forget(list);
        publish();
    }

    public final void onListVisibilityChanged(@NotNull View list) {
        Intrinsics.checkNotNullParameter(list, "list");
        List<WeakReference<View>> list2 = attachedLists;
        if (list2 == null || !list2.isEmpty()) {
            Iterator<T> it = list2.iterator();
            while (it.hasNext()) {
                if (((WeakReference) it.next()).get() == list) {
                    publish();
                    return;
                }
            }
        }
    }

    public final boolean ownsInlineMedia(@NotNull View view) {
        Object obj;
        Intrinsics.checkNotNullParameter(view, "view");
        List<WeakReference<View>> list = attachedLists;
        ArrayList arrayList = new ArrayList();
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            View view2 = (View) ((WeakReference) it.next()).get();
            if (view2 != null) {
                arrayList.add(view2);
            }
        }
        Iterator it2 = arrayList.iterator();
        while (true) {
            if (!it2.hasNext()) {
                obj = null;
                break;
            }
            obj = it2.next();
            if (INSTANCE.containsDescendant((View) obj, view)) {
                break;
            }
        }
        View view3 = (View) obj;
        if (view3 == null) {
            return true;
        }
        return view3.isShown() && topmostShownList() == view3;
    }
}
