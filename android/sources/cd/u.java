package cd;

import com.discord.chat.presentation.message.MessageView;
import com.facebook.react.modules.core.JavaTimerManager;
import com.facebook.react.uimanager.ViewGroupDrawingOrderHelper;
import com.google.android.material.button.MaterialButton;
import com.google.android.material.button.MaterialButtonToggleGroup;
import java.util.Comparator;
import kotlin.jvm.functions.Function1;

/* loaded from: classes3.dex */
public final /* synthetic */ class u implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3483d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3484e;

    public /* synthetic */ u(int i5, Object obj) {
        this.f3483d = i5;
        this.f3484e = obj;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        int generateMessageAccessories$lambda$43;
        int timers$lambda$1;
        int childDrawingOrder$lambda$1;
        switch (this.f3483d) {
            case 0:
                y yVar = (y) this.f3484e;
                return yVar.a(obj2) - yVar.a(obj);
            case 1:
                generateMessageAccessories$lambda$43 = MessageView.generateMessageAccessories$lambda$43((com.discord.c) this.f3484e, obj, obj2);
                return generateMessageAccessories$lambda$43;
            case 2:
                timers$lambda$1 = JavaTimerManager.timers$lambda$1((com.facebook.react.modules.core.a) this.f3484e, obj, obj2);
                return timers$lambda$1;
            case 3:
                childDrawingOrder$lambda$1 = ViewGroupDrawingOrderHelper.getChildDrawingOrder$lambda$1((com.discord.c) this.f3484e, obj, obj2);
                return childDrawingOrder$lambda$1;
            case 4:
                for (Function1 function1 : (Function1[]) this.f3484e) {
                    int a = ho.a.a((Comparable) function1.invoke(obj), (Comparable) function1.invoke(obj2));
                    if (a != 0) {
                        return a;
                    }
                }
                return 0;
            default:
                MaterialButtonToggleGroup materialButtonToggleGroup = (MaterialButtonToggleGroup) this.f3484e;
                MaterialButton materialButton = (MaterialButton) obj;
                MaterialButton materialButton2 = (MaterialButton) obj2;
                int compareTo = Boolean.valueOf(materialButton.L).compareTo(Boolean.valueOf(materialButton2.L));
                if (compareTo != 0) {
                    return compareTo;
                }
                int compareTo2 = Boolean.valueOf(materialButton.isPressed()).compareTo(Boolean.valueOf(materialButton2.isPressed()));
                return compareTo2 != 0 ? compareTo2 : Integer.compare(materialButtonToggleGroup.indexOfChild(materialButton), materialButtonToggleGroup.indexOfChild(materialButton2));
        }
    }
}
